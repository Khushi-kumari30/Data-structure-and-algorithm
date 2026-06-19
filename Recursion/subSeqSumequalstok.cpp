#include<bits/stdc++.h>
using namespace std;

void SubseqSumequalsK(int i,vector<int>a,vector<int>ds,int sum, int k){
    //base case
    if(i == a.size()){
        if(sum == k){
            for(int b : ds) cout<<b;
            cout<<endl;
        }
        return;
    }

    ds.push_back(a[i]);
    sum += a[i];
    SubseqSumequalsK(i+1,a,ds,sum,k);

    ds.pop_back();
    sum -= a[i];
     SubseqSumequalsK(i+1,a,ds,sum,k);
}
int main(){
    vector<int>a = {1,2,3,4};
    int k = 4;
    vector<int>ds;
     SubseqSumequalsK(0,a,ds,0,k);
}
