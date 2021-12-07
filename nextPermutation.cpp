#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> nextPermutation(int n, vector<int> arr){
        int i,l;
        vector<int> ans;
        for(i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(arr.begin(),arr.end());
            for(int j=0;j<n;j++){
            ans.push_back(arr[j]);
        }
        } else {
           for(l=n-1;l>i;l--){
               if(arr[l]>arr[i]){
                   break;
               }
           }
           swap(arr[i],arr[l]);
           reverse(arr.begin()+i+1,arr.end());
           for(int j=0;j<n;j++){
            ans.push_back(arr[j]);
        }
        }
        
        return ans;
    }
};

int main(){
  int N;
  cin>>N;

  vector<int> arr(N);

  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  Solution obj;
  vector<int> ans = obj.nextPermutation(N,arr);
  for(int u: ans)
    cout<<u<<" ";
  cout<<"\n";
}
