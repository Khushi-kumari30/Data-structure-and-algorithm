#include<bits/stdc++.h>
using namespace std;
int sumodD(vector<int>&a,int div){
    int sum = 0;
    int n = a.size();
    for(int i=0;i<n;i++){
       sum += ceil(a[i] / double(div));
    }
    return sum;
}
int BS(vector<int>&a,int threshold){
    int low = 1;
    int ans = -1;
    int high = *max_element(a.begin(),a.end());
    while(low<= high){
        int mid = (low + high)/2;
        if(sumodD(a,mid) <= threshold){
           ans = mid;
           high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int>a = {1,2,5,9};
    int n = a.size();
    int threshold = 6;
    int ans = BS(a,threshold);
    cout << ans;

}
