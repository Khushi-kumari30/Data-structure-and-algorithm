#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>a = {2, 2, 1, 2, 3, 2, 2};
    unordered_map<int,int>mp;
    int n = a.size();
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]] > n/2){
            cout<<a[i]<<endl;
            break;
        }
    }
}
