#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {4,5,6,7,0,1,2};
    int n = a.size();
    int tar = 5;
    int low = 0,high = n-1;
    while(low <= high){
        int mid =  (low + high)/2;
      if(a[mid] == tar){
        cout<<mid;
      }
      //if left half is sorted
      if(a[low] <= a[mid]){
        if(tar >= a[low] && tar <= a[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
      }else{
        if(tar >= a[mid] && tar <= high){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
      }
    }
return -1;
}
