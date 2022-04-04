#include <bits/stdc++.h>

using namespace std;

void seperate(int arr[],int size){

  int count = 0;

  for(int i=0;i<size;i++){
    if(arr[i]==0){
      count++;
    }
  }

  for(int i=0;i<count;i++){
    arr[i]=0;
  }

  for(int i=count;i<size;i++){
    arr[i] = 1;
  }

}

void printArray(int arr[],int n){
  
  cout<<"segregated array"<<endl;

  for(int i=0;i<n;i++){
    cout<<arr[i];
  }

}

int main(){
  int arr[] = { 0, 1, 0, 1, 1, 1 };
  int n = sizeof(arr)/sizeof(arr[0]);

  seperate(arr,n);
  printArray(arr,n);
}
