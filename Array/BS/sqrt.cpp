#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 45;
    int low = 1,high = n;
    int ans = 1;
    while(low <= high){
     int mid = (low + high)/2;
     long long prod =  mid*mid;
     if(prod <= n){
        ans = mid;
        low = mid + 1;
     }else{
        high = mid - 1;
     }

    }
    cout<<ans;
}
