//First Occurrence of Target
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {0,2,2,2,3,4};
    int target = 2;
    int left = 0;
    int n = a.size();
    int right = n-1;
    int mid;
    int ans = 0;
    while(left <= right){
        mid = left + (right - left)/2;
        if(a[mid] == target){
        ans = mid;
        right = mid - 1;
        }
        else
        if(a[mid] < target){
            left = mid + 1;
        }else{
            right = mid -1;
        }
    }
   cout <<ans;
}
