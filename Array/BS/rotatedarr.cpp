#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a = {4,5,6,7,0,1,2};
    //sort(a.begin(),a.end());
    int n = a.size();
    int l = 0;
    int r = n-1;
    int tar = 0;
    while(l <= r){
        int mid = l + (r -l)/2;
        if(a[mid] == tar){
        cout <<mid;
        break;
        }
    //left half is sorted
            if(a[l] <= a[mid]){
                if(tar >= a[l] && tar < mid){
                r = mid + 1;
            }else{
                l = mid -1;
            }
    }
    //right half is sorted
            else{
                if(tar > a[mid] && tar <= a[r]){
                    l = mid + 1;
                } else{
                    r = mid - 1;
                }
            }
}
}
