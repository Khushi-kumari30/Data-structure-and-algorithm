#include<bits/stdc++.h>
using namespace std;
void foursumOpti(vector<int>&a){
    int tar = 8;
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    int  n = a.size();
    for(int i=0;i<n;i++){
    if(i > 0 && a[i] == a[i-1])continue;
        for(int j=i+1;j<n;j++){
            if(j > i+1 && a[j] == a[j-1]) continue;//duplicate
               int k = j+1;
              int l = n-1;
    while(k <l){
        long long sum = a[i];
        sum += a[j];
        sum += a[k];
        sum += a[l];
        if(sum < tar){
         k++;
        }else if(sum > tar){
            l--;
        }else{
            vector<int>temp = {a[i],a[j],a[k],a[l]};
            ans.push_back(temp);
            k++;l--;
            while(k<l && a[k] == a[k-1])k++;
            while(k <l && a[l] == a[l+1])l--;
        }
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
    vector<int>a = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    foursumOpti(a);

}
