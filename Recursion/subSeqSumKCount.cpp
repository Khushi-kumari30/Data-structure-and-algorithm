#include<bits/stdc++.h>
using namespace std;

int  SubseqSumequalsKCount(int i,vector<int>&a,vector<int>&ds,int sum, int k){
    //base case
    if(i == a.size()){
        if(sum == k){
            for(int b : ds) cout<<b;
            cout<<endl;
            return 1;
        }
        return 0;
    }

    ds.push_back(a[i]);
    sum += a[i];
    int left =  SubseqSumequalsKCount(i+1,a,ds,sum,k);

    ds.pop_back();
    sum -= a[i];

    int right = SubseqSumequalsKCount(i+1,a,ds,sum,k);

    return left + right;
}

int main(){
    vector<int>a = {1,2,3,4};
    int k = 4;
    vector<int>ds;
    cout<<SubseqSumequalsKCount(0,a,ds,0,k);
}
