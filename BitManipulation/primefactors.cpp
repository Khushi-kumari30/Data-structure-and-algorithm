#include<bits/stdc++.h>
using namespace std;
vector<int>primefactor(int n){

    vector<int>list;
    for(int i=2;i<=n;i++){
        if(n % i == 0){
            list.push_back(i);

        while(n % i == 0){
            n =  n / i;
        }
    }
    }
    return list;
}
vector<int>primefactorBetter(int n){

    vector<int>list;
    for(int i=2;i*i <=n;i++){
        if(n % i == 0){
            list.push_back(i);

        while(n % i == 0){
            n =  n / i;
        }
    }
    }
    if(n != 1){
        list.push_back(n);
    }
    return list;
}
int main(){
    int n = 16;
    vector<int>ans = primefactorBetter(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}
