#include<bits/stdc++.h>
using namespace std;
void helper(int i,int k,int n,int sum,vector<int>&ds,vector<vector<int>>&ans){

    if(k == 0){
        if(sum == n){
            ans.push_back(ds);
        }
        return;
    }
    if (i > 9) return;
    if (sum > n) return;

    //pick
    ds.push_back(i);
    sum += i;
    helper(i+1,k-1,n,sum,ds,ans);

    ds.pop_back();
    sum -= i;
    //dont pick

    helper(i+1,k,n,sum,ds,ans);

}

vector<vector<int>> combinationSum3(int k, int n) {
       vector<int>ds;
       vector<vector<int>>ans;
         //imp
        helper(1,k,n,0,ds,ans);
        return ans;
    }

int main(){
    int k = 3;
    int n = 7;
     vector<vector<int>> ans = combinationSum3(k, n);

    for (auto &v : ans) {
        for (int x : v) {
            cout << x << " ";
        }
        cout <<endl;
    }

}
