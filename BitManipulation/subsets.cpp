#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {1,2,3};
    int n = 3;
    int subsets = 1 << n;
    vector<vector<int>>ans;

    for(int j = 0; j < (subsets - 1); j++){
          vector<int>list;
          for(int i=0;i<n;i++){
            if(j & (1 << i)){
                list.push_back(nums[i]);

            }
          }
     ans.push_back(list);
    }
    for(auto subset : ans){
    cout << "{ ";
    for(int x : subset){
        cout << x << " ";
    }
    cout << "}\n";
}


}
