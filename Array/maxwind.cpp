#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {1,3,-1,-3,5,3,6,7};
    int k =3;
    int maxi =0;
    int n = a.size();
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
        maxi = max(maxi,a[j]);
        }
        cout<<maxi<<" ";
        cout<<endl;
    }
}
