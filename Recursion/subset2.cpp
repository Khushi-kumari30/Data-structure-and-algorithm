#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
    if(ind == nums.size()){
        ans.push_back(ds);
        return;
    }
  ds.push_back(nums[ind]);
  fun(ind+1,nums,ans,ds);

  ds.pop_back();
  int next = ind+1;
   while(next < nums.size() && nums[next] == nums[ind]){
    next++;
  }
 fun(next,nums,ans,ds);
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        fun(0,nums,ans,ds);
        return ans;
    }

int main(){
     vector<int> nums = {1, 2, 2};

    vector<vector<int>> ans = subsetsWithDup(nums);

    for (auto &subset : ans) {
        cout << "[ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }


}
