#include<bits/stdc++.h>
using namespace std;
vector<int> pascal(int row){
    long long ans = 1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int col = 1;col < row;col++){
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
int main(){
vector<vector<int>>ans;
int n = 6;
for(int i=1;i<=n;i++){
    ans.push_back(pascal(i));
}
for(int i=0;i<n;i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
