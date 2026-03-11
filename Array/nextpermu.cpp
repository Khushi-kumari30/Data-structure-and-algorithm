//to find the next greater permutation of the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {2,1,5,4,3,0,0};
    int n = a.size();
    int idx = -1;
    for(int i=n-2;i>=0;i--){
        if(a[i] < a[i+1]){
             idx = i;
             break;;
        }
    }
    //if given array is last permutation
    if(idx == -1){
        reverse(a.begin(),a.end());
    }
    for(int i = n-1;i>=idx;i--){
        if(a[i] > a[idx]){
            swap(a[i],a[idx]);
            break;
        }

    }
    reverse(a.begin()+idx+1,a.end());

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
