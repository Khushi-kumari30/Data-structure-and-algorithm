#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n % 4 == 1) return 1;
    else if(n % 4 == 2) return n+1;
    else if (n % 4 == 3) return 0;
    else return n;
}

int numWithrange(int l, int r){
    return fun(l-1) ^ fun(r);
}
int main(){
int n = 3;
int l = 4;
int r = 7;
cout<<fun(n);
cout<<endl;
cout<<numWithrange(l,r);
}
