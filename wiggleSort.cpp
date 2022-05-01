#include <bits/stdc++.h>

using namespace std;


int main(){
  vector<int> nums;
  nums.push_back(3);
  nums.push_back(5);
  nums.push_back(2);
  nums.push_back(1);
  nums.push_back(6);
  nums.push_back(4);
//   nums.push_back(7);
  
  for(int i=0;i<nums.size()-1;i++){
            if(i%2==0){
                if(nums[i]>nums[i+1]){
                    swap(nums[i+1],nums[i]);
                }
            } else {
                if(nums[i]<nums[i+1]){
                    swap(nums[i+1],nums[i]);
                }
            }
        }
 for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
// return 0;


