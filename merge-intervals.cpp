#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        int n = intervals.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            } else {
                vector<int>&v = ans.back();
                int y = v[1]; // end time of previous interval
                //compare "y" with "i" start time
                //[1,4][2,5]
                //[1,5]
                //case of overlapping
                if(intervals[i][0]<=y){
                    v[1] = max(y,intervals[i][1]);
                } else {
                    ans.push_back(intervals[i]);
                }
                
            }
        }
        return ans;
    }
};

int main(){
  vector<vector<int>> intervals {{1,3},{2,6},{8,10},{15,18}};
  Solution obj;
  obj.merge(intervals);
  for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < intervals[i].size(); j++)
        {
            cout << intervals[i][j] << " ";
        }   
        cout << endl;
    }
}