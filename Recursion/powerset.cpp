#include<bits/stdc++.h>
using namespace std;

void powerSet(vector<char>&set){
    int n = set.size();
    int totalSubset = 1 << n;
    for(int i=0;i<totalSubset;i++){
        for(int j=0;j<n;j++){
             if((i & (1 << j)) != 0){
                cout<<set[j]<<" ";
             }
        }
        cout<<endl;
    }
}
int main(){
vector<char> S = {'A', 'B', 'C'};
  powerSet(S);
}
