#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
vector<int>arr = {2,1,0,5,0};
unordered_map<int,int>mp;
int tar = 6;
int n = arr.size();
for(int i=0;i<n;i++){
    int need = tar - arr[i];
    if(mp.find(need) != mp.end()){
        cout<<mp[need]<<" "<<i;
    }
    mp[arr[i]] = i;//“Save where this number appeared in the array.”
}



}
