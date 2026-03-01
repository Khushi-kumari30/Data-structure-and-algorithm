#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>a = {1,3};
    vector<int>b = {2};
    vector<int>merged(a.size() + b.size());
    int n = a.size();
    int m = b.size();
    int median;
    merge(a.begin(), a.end(), b.begin(), b.end(), merged.begin());
    int total = n+m;
    if(total % 2 == 1){
    median = merged[total / 2];
    }else{
         median = (merged[total - 1] + merged[total]) / 2.0;
    }
    cout<<median;

}
