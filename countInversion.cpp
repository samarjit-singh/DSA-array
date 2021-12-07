#include <bits/stdc++.h>
using namespace std;

long long int mergeSort(long long *arr,long long s,long long e){
    // step 1
    if(s>=e){
        return 0;
    }
    // step2
    long long mid = (s+e)/2;
    long long int left_count = mergeSort(arr,s,mid);
    long long int right_count = mergeSort(arr,mid+1,e);
    
    
    // step3
    long long temp[e-s+1];
    long long i=s,j=mid+1,count=0,k=0;
    
    while(i<=mid&&j<=e){
        if(arr[j]<arr[i]){
            count += mid-i+1;
            temp[k++]=arr[j++];
        } else {
            temp[k++]=arr[i++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    
    long long t=0;
    
    for(int i=s;i<=e;i++){
        arr[i]=temp[t++];
    }
    
    return left_count+right_count+count;
}

long long int inversionCount(long long arr[], long long N)
{
    long long start = 0, end = N-1;
    return mergeSort(arr,start,end);
}

int main(){
  long long N;
  cin>>N;

  long long A[N];

  for(long long i=0;i<N;i++){
    cin>>A[i];
  }

  cout<<inversionCount(A,N);
  return 0;
}