#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
vector<int>arr = {2,1,0,5,0};
int n = arr.size();
unordered_map<int, int>mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
for(int i =0;i<n;i++){
    if(mp[arr[i]] > 1){
        cout<<arr[i]<<endl;
        break;
    }
}

}
