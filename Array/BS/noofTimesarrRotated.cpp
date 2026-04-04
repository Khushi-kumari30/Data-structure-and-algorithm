//NUmber of times aan array has been rotated
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {3,4,5,1,2};
    int n = a.size();
    int low = 0,high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[low] <= a[mid]){
        if(a[low] < ans){
            index = low;
            ans = a[low];
        }
        low = mid + 1;
        }else{
            high = mid - 1;
            if(a[mid] < ans){
                index = mid;
                ans = a[mid];
            }
        }
    }
    cout<<index;
    return 0;
}
