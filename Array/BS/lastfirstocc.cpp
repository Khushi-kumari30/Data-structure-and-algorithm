#include<bits/stdc++.h>
using namespace std;
int firstOccur(vector<int>&a){
    int n = a.size();
    int tar = 8;
    int first = -1;
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == tar){
         first = mid;
         high = mid -1;
        }
        else if(a[mid] < tar){
              low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    return first;
}
int lastOccur(vector<int>&a){
      int n = a.size();
    int tar = 8;
    int last = -1;
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == tar){
         last = mid;
         low = mid +1;
        }
        else if(a[mid] < tar){
              low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    return last;
}
int main(){
vector<int>a = {2,8,8,8,8,8,11,13};
int first = firstOccur(a);
int last = lastOccur(a);
cout << first <<" "<<last;
}
