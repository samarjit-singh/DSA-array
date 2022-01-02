#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int twice_count = 0;
        
        for(int i=0;i<n;i++){
            // cout<<"k-arr[i] = "<<k-arr[i]<<endl;
            twice_count += m[k-arr[i]];
            // cout<<twice_count<<endl;
            if(k-arr[i] == arr[i]){
                twice_count--;
            }
        }
        
        
        return twice_count/2;
    }
};

int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  Solution ob;
  auto ans = ob.getPairsCount(arr,n,k);
  cout<<ans<<"\n";
  return 0;
}