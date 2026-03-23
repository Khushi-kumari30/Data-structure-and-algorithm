#include<bits/stdc++.h>
using namespace std;
vector<int>threeSumopi(vector<int>&a){
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(i >0 && a[i] == a[i-1]) continue;
    int j = i+1;
    int k = n-1;
    while(j <k){
        int sum = a[i]+a[j]+a[k];
         if(sum < 0){
            j++;
        }
        else if(sum > 0){
            k--;
        }else{
            vector<int>temp = {a[i],a[j],a[k]};
            ans.push_back(temp);
            j++;
            k--;

            while(j <k && a[j] == a[j-1]) j++;
            while(j < k && a[k] == a[k+1]) k--;
        }
    }
}
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
    vector<int>a = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
       threeSumopi(a);
}
