#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {6,8,0,1,3};
    stack<int>s;
    vector<int>ans(a.size(),0);
    for(int i=a.size()-1;i>=0;i--){
    while(s.size() > 0 && s.top() <= a[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(a[i]);
    }
    for(int val : ans){
        cout<<val<<" ";
    }

}
