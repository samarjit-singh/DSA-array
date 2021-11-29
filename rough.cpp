#include <bits/stdc++.h>
using namespace std;

void union1(int arr1[],int arr2[] , int n , int m){
  int count;
  int h[n+m] = {0};
  for(int i=0;i<n;i++){
    h[arr1[i]]++;
  }
  for(int j=0;j<m;j++){
    h[arr2[j]]++;
  }
  for(int i=0;i<n+m;i++){
    if(h[i]>0){
      count++;
    }
  }
  cout<<"total number of elements in the union set "<<count;
}

int main(){
  int n,m;
  cin>>n;
  cin>>m;

  int arr1[n],arr2[m];

  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }

  union1(arr1,arr2,n,m);
  
  
}