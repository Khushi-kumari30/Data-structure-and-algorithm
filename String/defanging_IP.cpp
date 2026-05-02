#include<bits/stdc++.h>
using namespace std;
string defangIPaddr(string address) {
    int index = 0;
    string ans;
    while(index < address.size()){
        if(address[index] == '.'){
            ans += "[.]";
        }else{
            ans += address[index];
        }
        index++;
    }
}
int main(){
    string a = "1.1.1.1";
    cout<<defangIPaddr(a);
}
