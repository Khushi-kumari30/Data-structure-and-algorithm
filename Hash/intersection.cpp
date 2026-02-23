#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 5};
    unordered_map<int,int> mp;
for(int i=0;i<a.size();i++){
    mp[a[i]] = 1;//Even though 3 appears twice, it’s stored once.
}
for(int i=0;i<b.size();i++){
    mp[b[i]] = 1;
}
for(int i=0;i<b.size();i++){
    if(mp[b[i]] == 1){
        cout<<b[i]<<" ";
        mp[b[i]] = 0;
    }
}
}
