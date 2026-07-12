#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b){
a = a ^ b;
b = a ^ b;
a = a ^ b;
cout<<a<<" "<<b;
}

void CheckithBitSetOrNot(int n,int i){
if((n & (1<<i)) != 0){
    cout<<"set";
}else{
    cout<<"Not set";
}
}

void setithBit(int n,int i){
   n = n | (1 << i);
  cout<<n;
}

void clearithBit(int n, int i){
    n = n & ~(1 << i);
    cout<<n;
}

void toggleithBit(int n,int i){
    n = n ^ (1 << i);
    cout<<n;
}

void odd(int n){
    if(n & 1){
        cout<<"odd";
    }else{
        cout<<"even";
    }
}

void powerOf2(int n){
    if((n & (n-1)) == 0){
        cout<<"power of 2";
    }else{
        cout<<"not power of 2";
    }
}
int CntsetIndex(int n){
    int cnt = 0;
    while(n > 1){
    cnt += n&1;
    n = n>>1;
    }
    if(n == 1) cnt += 1;
    return cnt;
}

int main(){
int a = 5;
int b = 6;
swap(a,b);
cout<<endl;

int n = 13;
int i = 2;
CheckithBitSetOrNot(n,i);
cout<<endl;

int m = 9;
int j = 2;
setithBit(m,j);
cout<<endl;

clearithBit(n,i);
cout<<endl;

toggleithBit(n,i);
cout<<endl;

odd(a);
cout<<endl;

powerOf2(34);
cout<<endl;

cout<<CntsetIndex(13);


}
