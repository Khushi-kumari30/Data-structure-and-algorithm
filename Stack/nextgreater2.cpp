#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,3};
     int n = arr.size();
    vector<int>ans(n,-1);
    stack<int>s;
    for(int i = 2*n - 1; i>= 0;i--){
        while(s.size() > 0 && arr[s.top()] <= arr[i % n]){
            s.pop();
        }
    ans[i%n] = s.empty() ? -1 : arr[s.top()];
    s.push(i%n);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
