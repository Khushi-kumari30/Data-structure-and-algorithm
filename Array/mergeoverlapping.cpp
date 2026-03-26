#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>a = {{1,3},{2,6},{8,10},{15,18}};
    int n = a.size();
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(
            ans.empty() || a[i][0] > ans.back()[1]){
            ans.push_back(a[i]);
        }else{
            ans.back()[1] = max(ans.back()[1],a[i][1]);
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
