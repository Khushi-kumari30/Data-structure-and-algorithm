#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>a = {1,2,1,2,3,4,5};
    int n = a.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
       if(mp[a[i]] == 1){
           cout << a[i];
           break;
       }
    }
}
