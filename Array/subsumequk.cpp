#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>a = {9,4,20,3,10,5};
       int n = a.size();
    vector<int>presum(n,0);
    int k = 33;
    int count =0;
    presum[0] = a[0];
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + a[i];
    }
    unordered_map<int,int>mp;
    for(int j=0;j<n;j++){
        if(presum[j] == k){
            count++;
        }
        int val = presum[j] - k;//for hmare paas right boundary h left boundary chahiye
        if(mp.find(val) != mp.end()){
            count += mp[val];
        }
       /*  if(mp.find(presum[j]) == mp.end()){
            mp[presum[j]] = 0;
            }*/
        mp[presum[j]]++;//Increase count of current prefix sum
    }
cout<<count;
}
