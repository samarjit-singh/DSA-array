#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0; //set the maximum profit to 0
        int minPrice = INT_MAX; //set the minimum price to maximum number
        for(int i=0;i<prices.size();i++){
            minPrice = min(minPrice,prices[i]);
            maxProfit = max(maxProfit,prices[i]-minPrice);
        }
        return maxProfit;
    }
};

int main(){
  vector<int> arr;
  arr.push_back(7);
  arr.push_back(6);
  arr.push_back(4);
  arr.push_back(3);
  arr.push_back(1);
  // arr.push_back(4);
  Solution ob;
  cout<<" maximum profit is "<<ob.maxProfit(arr);
}