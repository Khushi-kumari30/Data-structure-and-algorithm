#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "mam";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    bool ispalindrome = true;
    for(int i=0;i<s.size();i++){
        if(s[i] != st.top()){
            ispalindrome = false;
            break;
        }
        st.top();
    }
if(ispalindrome){
        cout<<"palindrome";
    }else{
        cout<<"no palindrome";
    }
}
