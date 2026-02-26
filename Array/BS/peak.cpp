#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {1,2,3,1};
    int l = 0;
    int n = a.size();
    int r = n-1;
while(l <= r){
    int mid = l +(r-l)/2;
    if(a[mid - 1] < a[mid] && a[mid] > a[mid+1]){
        cout << mid;
        break;
    }else{
        if(a[mid -1] < a[mid]){
            l = mid + 1;
        }else{
            r = mid-1;
        }
    }
}
}
