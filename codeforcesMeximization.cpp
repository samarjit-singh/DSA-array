#include<bits/stdc++.h>

using namespace std;

int maximization(int arr[],int n){
  for(int i=0;i<n;i++){
    if (arr[i]>arr[i+1]){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;

      i = -1;
    }
  }

  // int count = 0;
  // for(int i=0;i<n;i++){
  //   if(arr[i]==arr[i+1]){
  //     swap(arr[i+1],arr[n-1]);
  //     count ++;
  //   }
  // }
  int count = 0;
  for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
      arr[i+1] = INT_MAX;
      count ++;
    }
  }

  for(int i=0;i<n-count-1;i++){
    if (arr[i]>arr[i+1]){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;

      i = -1;
    }
  }
  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    maximization(arr,n);
  }

  return 0;
}