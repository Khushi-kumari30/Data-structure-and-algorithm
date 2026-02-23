#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "abcabpwre";
    int hash[26] = {0};
    for(int i=0;i<str.size();i++){
        hash[str[i] - 'a']++;
        if(hash[str[i] -'a'] == 2){
            cout<<str[i];
            break;
        }
    }

}
