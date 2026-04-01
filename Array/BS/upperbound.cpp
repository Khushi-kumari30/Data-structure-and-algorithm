#include<bits/stdc++.h>
using namespace std;
void upperBound(vector<int>a){ // TC = O(log n)
    int x = 6;
    int n = a.size();
    int low = 0,high=n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] > x){
            ans = mid;
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
cout<<ans;
}
int main(){
    vector<int>a = {2,3,6,7,8,8,11,11,11,12};
    auto it  = upper_bound(a.begin(),a.end(),6);
    int index = it - a.begin();
    cout<<index<<endl;
    upperBound(a);
}
