#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]  = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    bool found = false;
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
            found = true;
            break;
        }
    }
if(!found){
    cout<<"false";
}else{
    cout<<"true";
}
}
