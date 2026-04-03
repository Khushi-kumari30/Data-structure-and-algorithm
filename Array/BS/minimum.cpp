#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {4,5,6,7,9,1,2};
    int n = a.size();
    int low = 0,high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[low] <= a[mid]){
             ans  = min(ans,a[low]);
             low = mid + 1;
        }else{
            ans = min(ans,a[mid]);
            high = mid -1;
        }
    }
    cout<<ans;

return 0;
}
