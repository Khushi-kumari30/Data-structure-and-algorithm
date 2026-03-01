#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>a = {1,-1,5,-2,3};
    int k=3;
    int n = a.size();
    vector<int>presum(n,0);
    presum[0] = a[0];
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + a[i];
    }
    unordered_map<int,int>mp;
    int maxlen =0;
    for(int j=0;j<n;j++){
        if(presum[j] == k){
            maxlen = j+1;
        }
         int val = presum[j] - k;
         if(mp.find(val) != mp.end()){
             maxlen = max(maxlen,j-mp[val]);
         }
         if(mp.find(presum[j]) == mp.end()){
                         mp[presum[j]] = j;
                     }

    }
    cout<<maxlen;

}
