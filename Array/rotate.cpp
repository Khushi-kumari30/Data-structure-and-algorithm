#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,3,4,5,6,7};
    int n = a.size();
    vector<int>b;
    int k = 3;
    k = k % n;
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }

}
