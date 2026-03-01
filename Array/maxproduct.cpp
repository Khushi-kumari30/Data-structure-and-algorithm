#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int>a = {2,3,-2,4};
    vector<int>ans;
    int n = a.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int pro = 1;
        for(int j = i;j<n;j++){
                pro *= a[j];
                maxi = max(maxi,pro);

            }
        }
    cout<<maxi<<endl;

}
