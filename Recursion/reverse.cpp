#include<bits/stdc++.h>
using namespace std;
int reverse(int a[],int s,int l){
    if(s >=  l){
        return 0;
    }
    swap(a[s],a[l]);
    reverse(a,s+1,l-1);
}
int main(){
int a[5] = {1,2,3,4,5};
int n = 5;
reverse(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
