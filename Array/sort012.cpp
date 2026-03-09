#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {0,1,2,0,1,2};
    int n = a.size();
    int low = 0,mid = 0,high = n-1;
    while(mid <= high){
        if(a[mid] == 0){
            swap(a[mid],a[low]);
            mid++,low++;
        }else if(a[mid] == 1){
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
