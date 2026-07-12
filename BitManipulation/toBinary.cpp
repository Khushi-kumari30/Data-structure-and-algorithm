#include<bits/stdc++.h>
using namespace std;
string convert2Binary(int n){
    string res = " ";
    while(n != 0){
        if(n % 2 == 1){
            res += '1';
        }else
        res += '0';
        n = n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int n = 7;
    cout<<convert2Binary(n);

}
