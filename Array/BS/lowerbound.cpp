#include<bits/stdc++.h>
using namespace std;
void lowerbound(vector<int>&a){
    int n = a.size();
    int x = 10;
    int low  = 0,high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] >= x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
cout<<ans;
}
int main(){
vector<int>a = {1,2,3,3,5,8,8,10,10,11};
lowerbound(a);
}
