// Remove Consecutive Duplicates
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    string s = "aaabbccdaa";
    stack<char>ans;
    for(int i=0;i<s.size();i++){
        if(ans.size() == 0){
            ans.push(s[i]);
        }else{
        if(ans.top() == s[i]){
            continue;
        }else{
            ans.push(s[i]);
        }
    }
    }
    string res = " ";
    while(!ans.empty()){
        res += ans.top();
        ans.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res<<" ";

}
