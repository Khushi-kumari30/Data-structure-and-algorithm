#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a = {1,12,3,9,5};
    vector<int>sq;
    int n = a.size();
    for(int i=0;i<n;i++){
        a[i] = a[i] * a[i];
        sq.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
    cout<<sq[i]<<" ";
    }
}
