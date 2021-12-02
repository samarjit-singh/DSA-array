#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        vector<int> vec;
        sort(arr,arr+n);
        int i=0;
        while(i<n){
            if(arr[i]==arr[i+1]){
                vec.push_back(arr[i]);
                
                while(arr[i]==arr[i+1]){
                    i++;
                }
            } else {
                i++;
            }
        }
        if(vec.empty()){
            vec.push_back(-1);
        }
        return vec;
    }
};

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  Solution obj;

  vector<int> ans = obj.duplicates(a,n);

  for(int i:ans){
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}