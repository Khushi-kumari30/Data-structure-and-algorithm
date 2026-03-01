#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a = {1,0,-1,0,-2,2};
    int n = a.size();
    vector<int>ans;
    int target = 0;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i+1;j<n;j++){
           int p = j+1,q = n-1;
    while(p < q){
        long long sum = a[i]+a[j]+a[p]+a[q];
        if(sum < target){
            p++;
        }else if(sum > target){
            q--;
        }else{
            ans.push_back({a[i],a[j],a[p],a[q]});
        p++,q--;
        }
    }
        }
    }
}
