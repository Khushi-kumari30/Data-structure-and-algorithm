#include<bits/stdc++.h>
using namespace std;
int countInversionbrute(vector<int>&a){
int n = a.size();
int cnt = 0;
for(int i=0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(a[i] > a[j]){
            cnt++;
        }
    }
}
return cnt;
}
// Optimal - Using merge sort
int cnt =0;
void merge(vector<int>&a,int st,int mid,int end){
    vector<int>temp;
    int i  = st;
    int j = mid + 1;
    while(i<= mid && j<= end){
        if(a[i] <= a[j]){
            temp.push_back(a[i]);
            i++;
        }else{
            temp.push_back(a[j]);
            cnt += (mid - i + 1 );
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(a[j]);
        j++;
    }
    for(int idx =0;idx <temp.size();idx++){
        a[idx+st] = temp[idx];
    }
}
void mergerSort(vector<int>&arr,int st,int end){
    if(st < end){
        int mid = st + (end - st)/2;
    mergerSort(arr,st,mid);//left half
    mergerSort(arr,mid+1,end) ;//right half
    merge(arr,st,mid,end);
    }
}
int inversionCntopti(vector<int>&a,int n){
    mergerSort(a,0,n-1);
    return cnt;
}
int main(){
    vector<int>a= {6,3,5,2,7};
    int n = a.size();
    cout<<inversionCntopti(a,n);


}
