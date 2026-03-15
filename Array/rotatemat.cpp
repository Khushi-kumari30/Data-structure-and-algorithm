#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>>&a){
    int n = a.size();
    vector<vector<int>>ans(n, vector<int>(n));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            ans[j][n-1-i] = a[i][j];
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
        cout<<ans[i][j] <<" ";
        }
        cout<<endl;
    }

}
void rotateMatOpti(vector<vector<int>>&a){
    int n = a.size();
    int m = a[0].size();
    //transpose
    //matrix[0][1] ↔ matrix[1][0]
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(a[i][j] , a[j][i]);
        }
    }

    // reverse rows
       for(int i=0;i<n;i++){
        reverse(a[i].begin(),a[i].end());
       }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> a = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
//rotateMatrix(a);
rotateMatOpti(a);
}
