#include <iostream>
#include<stdio.h>
using namespace std;

int main(){

  int N;
  cin>>N;
  int arr[N];

  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  int K;
  cin>>K;


// sorting array in ascending order using  selection sort
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
        if(arr[i]>arr[j]){
          int temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
    }
  }


//  cout<<"sorted array is"<<endl;
//   for(int i=0;i<N;i++){
//     cout<<" "<<arr[i];
//   } 
  cout<<K<<" smallest element in the given array is "<<arr[K-1];

}