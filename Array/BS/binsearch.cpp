#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {1,2,5,7,10};
    int target = 2;
    int left = 0;
    int n = a.size();
    int right = n-1;
    int mid;
    while(left <= right){
        mid = left + (right - left)/2;
        if(a[mid] == target){
            cout<<mid;
            break;
        }
        else
        if(a[mid] < target){
            left = mid + 1;
        }else{
            right = mid -1;
        }
        //cout<<mid;
    }
}
