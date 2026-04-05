#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,1,2,2,3,3,4,4,3,3,6};
    int n = a.size();
    int low = 1,high = n-2;
    if(n == 1) cout<< a[0];
    if(a[0] != a[1]) cout<< a[0];
    if(a[n-1] != a[n-2]) cout<<a[n-1];
    while(low <= high){
   int mid = (low + high)/2;
    if(a[mid] != a[mid + 1] && a[mid] != a[mid - 1]){
           cout<<a[mid];
    }
    if((mid % 2 == 1 && a[mid -1] == a[mid]) || (mid %2 == 0 && a[mid] == a[mid + 1])){
        low = mid + 1;
    }else{
        high = mid -1;
    }
    }
    return 0;
}
