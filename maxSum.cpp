#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int n){
        
        int maxSum = arr[0];
        int currentSum = maxSum;
        for(int i=1;i<n;i++){
            if(currentSum>=0){
                currentSum += arr[i];
            } else {
                currentSum = arr[i];
            }
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
        }
        cout<<" max sum is "<<maxSum;
        
    }

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  maxSubarraySum(arr,n);

  
}