#include <bits/stdc++.h>
using namespace std;

void union1(int arr1[],int arr2[] , int n , int m){
  // first print the elements of array1
  // for(int i=0;i<n;i++){
  //   cout<<arr1[i]<<" ";
  // }
  // // check for the second array 
  // // if elemtns in array 2 are not same as array 1 the print them
  // for(int j=0;j<m;j++){
  //   int flag = 0;
  //   for(int i=0;i<n;i++){
  //     if(arr1[i]==arr2[j]){
  //       flag=1;
  //       break;
  //     }
  //   }
  //   if(flag!=1){
  //     cout<<arr2[j]<<" ";
  //   }
  // }
  int count=0;
  for(int i=0;i<n;i++){
    count++;
  }
 
 
  for(int j=0;j<m;j++){
    int flag = 0;
    for(int i=0;i<n;i++){
      if(arr1[i]==arr2[j]){
        flag=1;
        break;
      }
    }
    if(flag!=1){
      count++;
    }
  }
  cout<<"number of elements in the union set "<<count;
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