#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int minJumps(int arr[], int n){
    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;
        
    if(n==1 && arr[0]==0)
        return 0;
                
    if(arr[0]==0)
        return -1;

    for(int i=1;i<n;i++){
        if(i == n-1){
            cout<<jump;
        }
        maxReach = max(maxReach,i+arr[i]);
        step--;
        if(step==0){
          jump++;
          if(i>=maxReach)
            return -1;
            step = maxReach-i;
          }
    }   
}

int main(){
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 
  minJumps(arr, n);
    return 0;
}