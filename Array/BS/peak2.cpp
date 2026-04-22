#include<bits/stdc++.h>
using namespace std;
void peak2Brute(vector<vector<int>>& mat){
        int n = mat.size();
        int m = mat[0].size();
        int maxi = INT_MIN;
        int row = -1,col= -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             if(mat[i][j] > maxi){
                maxi = mat[i][j];
                row = i;
                col = j;
             }
            }
        }
        cout<<row<<" "<<col;
}
int main(){
    vector<vector<int>>a = {{10,20,15},{21,30,14},{7,16,32}};
    peak2Brute(a);
return 0;
}
