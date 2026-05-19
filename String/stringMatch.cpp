#include<bits/stdc++.h>
using namespace std;
int Stringmatch(string s1,string s2){
    int n = s1.size(),m = s2.size();
    for(int i=0;i<=n-m;i++){
        int first = i,sec = 0;
        while(sec < m){
            if(s1[first] != s2[sec]){
                break;
            }else{
                 first++,sec++;
            }
            if(sec == m){
                return first - sec;
            }
        }
    }
    return -1;
}

int main(){
    string s1 = "abcabdefg";
    string s2 = "cab";
    cout<<Stringmatch(s1,s2);
    return 0;
}
