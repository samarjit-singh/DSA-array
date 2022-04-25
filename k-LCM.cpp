#include <bits/stdc++.h>

using namespace std;

int LCM(int n, int k){
  int ones;
  ones = k-3; //2
  int result[k] = {0};

  for(int i=0;i<ones;i++){
    result[i] = 1;
  }

  int remainingSum = n - ones; //9-2=7
  int left = k-ones;

  if(remainingSum % 2 == 0){
    if( (n/2) % 2 != 0){
      for(int i=ones;i<left;i++){
          result[i] = (remainingSum-2)/2;
      }
      result[k-1] = 2;
    } else {
      for(int i=ones;i<left;i++){
          result[i] = remainingSum/2;
      }
    }
  } else {

  int a = ((remainingSum)/2);
  for(int i=ones;i<=left;i++){
    result[i] = a;
  }
  result[k-1] = 1;
  }


  

  for(int i=k-1;i>=0;i--){
    cout<<result[i]<<" ";
  }
  cout<<endl;

  return 1;

};

int main(){

  int t;
  cin>>t;

  while(t--){
    int n;
    int k;
    cin>>n;
    cin>>k;
    LCM(n,k);
  }
}