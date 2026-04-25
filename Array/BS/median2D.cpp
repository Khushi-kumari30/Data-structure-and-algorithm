#include<bits/stdc++.h>
using namespace std;
int medianin2D_Brute(vector<vector<int>>a){
    vector<int>ans;
    int n = a.size();
    int m = a[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         ans.push_back(a[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int ans_size = ans.size();
    int median = ans[ans_size/2];
    return median;
}
int main(){
    vector<vector<int>>a ={{1,5,7,9,11},{2,3,4,5,10},{9,10,12,14,16}};
    int ans = medianin2D_Brute(a);
    cout<<ans;
}
