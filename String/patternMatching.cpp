#include<bits/stdc++.h>
using namespace std;
void patternBrute(string s){
    int n = s.size();
    int i=0;
    for(int j=i;j<n;j++){
         string pre = "";
        for(int k=i;k<=j;k++){
            pre += s[k];
    }

    for(int x=n-1;x>=0;x--){
         string suf = "";
     for(int y=x;y<n;y++){
        suf += s[y];
     }
     if(suf == pre){
        cout<<suf<<" ";
        cout<<suf.length()<<endl;
     }
    }
    }
    }
    int main(){
       string s = "aacaa";
       patternBrute(s);
    }
