#include <iostream>
#include<stdio.h>
using namespace std;

int main(){

  int n;
  cin>>n;
  int arr[n];
  int min,max;
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  min = arr[0];
  max = arr[0];
  // for finding minimum element
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<"Minimum element is "<<min;
  cout<<endl;
  cout<<"Maximum element is "<<max;

  return 0;
}
