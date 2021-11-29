#include <bits/stdc++.h>
using namespace std;

void reArrange(int arr[],int n){
  //code foe asscending order
  // for(int i=0;i<n-1;i++){
  //   for(int j=i+1;j<n;j++){
  //     if(arr[i]>arr[j]){
  //       int temp = arr[j];
  //       arr[j] = arr[i];
  //       arr[i] = temp;
  //     }
  //   }
  // }

  // code for just shifting
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      if(i!=j){
        swap(arr[i],arr[j]);
      }
      j++;
    }
  }
}

int main(){
  int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
  int n = sizeof(arr)/sizeof(arr[0]);
  reArrange(arr,n);
  for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
  } 
}