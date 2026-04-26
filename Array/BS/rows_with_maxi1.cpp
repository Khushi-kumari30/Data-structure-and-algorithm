#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr){
    int n = arr.size();
    int x = 1;
    int ans = n;
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return ans;

}
int rowsWithMaxOnes(vector<vector<int>>&a,int n,int m){
    int max_cnt = 0;
    int index = -1;

    for(int i=0;i<n;i++){
        int cnt_ones = m - lowerBound(a[i]);
        if(cnt_ones > max_cnt){
            max_cnt = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main(){
vector<vector<int>>a = {{0,0,1,1,1},{0,0,0,0,0},{0,1,1,1,1},{0,0,0,0,0},{0,1,1,1,1}};
int n = a.size();
int m = a[0].size();
int ans = rowsWithMaxOnes(a,n,m);
cout<<ans;
return 0;
}
