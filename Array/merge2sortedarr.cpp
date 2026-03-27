#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,3,0,0,0};
    vector<int>b = {2,5,6};
    int m = 3;
    int n = b.size();
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(j >= 0 && i >= 0){
    if(j >= 0 && a[i] > b[j]){
        a[k] = a[i];
        i--;
        k--;
    }else{
     a[k] = b[j];
     k--,j--;
    }
}
  // copy remaining elements of b
    while(j >= 0){
        a[k] = b[j];
        j--;
        k--;
    }

for(int i=0;i<m+n;i++){
    cout<<a[i]<<" ";
}
return 0;
}
