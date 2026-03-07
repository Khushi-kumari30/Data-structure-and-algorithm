#include<bits/stdc++.h>
using namespace std;
void interSectionbrute(vector<int>&a,vector<int>&b){
int n1 = a.size();
int n2 = b.size();
vector<int>ans;
int vis[n2] = {0};
for(int i=0;i<n1;i++){
for(int j=0;j<n2;j++){
    if(a[i] == b[j] && vis[j]==0){
     ans.push_back(a[i]);
        vis[j] = 1;
        break;
    }
    if(b[j] > a[i]) break;
}
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}
void interSectionopti(vector<int>&a,vector<int>&b){
int n1 = a.size();
int n2 = b.size();
int i=0;
int j = 0;
vector<int>ans;
while(i <n1 && j < n2){
    if(a[i] < b[j]){
        i++;
    }else{
        if(b[j] < a[i]){
            j++;
        }
     else{
        //if both are equal
        ans.push_back(a[i]);
        i++;
        j++;
    }
}
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}
int main(){
    vector<int>a = {1,1,2,3,4,5};
    vector<int>b = {2,3,4,4,5,6};
    //interSectionbrute(a,b);
    interSectionopti(a,b);
}
