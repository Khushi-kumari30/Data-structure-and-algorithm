#include<bits/stdc++.h>
using namespace std;
void fun(int ind,int sum,vector<int>&a,int n,vector<int>&sumSubset){
    if(ind == n){
        sumSubset.push_back(sum);
        return;
    }

    //pick
    fun(ind+1,sum + a[ind],a,n,sumSubset);

    // dont pick
    fun(ind +1,sum,a,n,sumSubset);

}
vector<int>SubSetSum(vector<int>a,int n){
    vector<int>sumsubset;
    fun(0,0,a,n,sumsubset);
    sort(sumsubset.begin(),sumsubset.end());
    return sumsubset;
}

int main(){
    vector<int>a = {3,1,2};
    int n = 3;
    vector<int> ans = SubSetSum(a,n);

    for(int x : ans) {
        cout << x << " ";
    }
}
