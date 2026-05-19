#include<bits/stdc++.h>
using namespace std;
int lps(string s){
    vector<int>lps(s.size(),0);
    int pre = 0,suf = 1;
    while(suf < s.size()){
        //pre suf match
        if(s[pre] == s[suf]){
            lps[suf] = pre + 1;
            pre++,suf++;
        }else{
            if(pre == 0){
                lps[suf] = 0;
                suf++;
            }else{
                pre = lps[pre - 1];
            }
        }
    }
return lps[s.size()-1];
}
int main(){
string s = "abcabdabcabdabdab";
cout<<lps(s);
return 0;
}
