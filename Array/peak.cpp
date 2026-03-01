#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {1,4,3,8,5};
      int n = a.size();
    vector<int>b;
    for(int i=1;i<n-1;i++){
        if(a[i] > a[i+1] && a[i] > a[i-1]){
            b.push_back(i);
        }
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }

}
