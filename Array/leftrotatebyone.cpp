#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,3,4,5};
    int n = a.size();
    int temp = a[0];
    for(int i=0;i<=n-1;i++){
      a[i-1] = a[i];
    }
    a[n-1] = temp;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
