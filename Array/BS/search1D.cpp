#include<bits/stdc++.h>
using namespace std;
int Search(vector<vector<int>>&a){
int tar = 24;
int n = a.size();
int m = a[0].size();
int low = 0,high = (n*m)-1;
while(low <= high){
    int mid = low + (high - low)/2;
    if(a[mid /m][mid %m] == tar){
        return true;
    }if(a[mid /m][mid %m] < tar){
       low = mid + 1;
    }else{
        high = mid -1;
      }
    }
return false;
}

int main(){
    vector<vector<int>>a = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    int ans = Search(a);
    cout<<ans;

}
