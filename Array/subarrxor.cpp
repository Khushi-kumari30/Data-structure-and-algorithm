#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {4,2,2,6,4};
    int k = 6;
    int n = a.size();
    unordered_map<int,int>mp;
    int cnt = 0;
    int xr = 0;
    for(int i=0;i<n;i++){
        xr = xr ^ a[i];
        if(xr == k) cnt++;
        int x  = xr ^ k;
        cnt += mp[x];
        mp[xr]++;
    }
    cout << cnt;
}
