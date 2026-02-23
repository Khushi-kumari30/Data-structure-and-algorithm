#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {0,1,0,3,12};
    int n = a.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j] != 0){
            swap(a[j],a[i]);
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
}
