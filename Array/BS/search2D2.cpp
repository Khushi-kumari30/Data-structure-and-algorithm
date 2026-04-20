#include<bits/stdc++.h>
using namespace std;
int Search2(vector<vector<int>>&a){
int tar = 16;
int n = a.size();
int m = a[0].size();
int row = 0,col = m-1;
while(row < n && col >= 0){
    if(a[row][col] == tar){
        return true;
    }if(a[row][col] < tar){
       row++;
    }else{
        col--;
      }
    }
return false;
}

int main(){
    vector<vector<int>>a = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int ans = Search2(a);
    cout<<ans;

}
