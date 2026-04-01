#include<bits/stdc++.h>
using namespace std;
void floor(vector<int>&a){
    int n = a.size();
    int x = 25;
    int low = 0,high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] <= x){
            ans = a[mid];
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<ans;
}
int main(){
    vector<int>a = {10,20,30,40,50};
      floor(a);
}
