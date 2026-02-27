//TC: O(nlogn)  SC: O(n)
#include<iostream>
#include<vector>
using namespace std;
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
int main(){
    vector<int>a = {12,31,35,8,32,17} ;
    mergerSort(a,0,a.size()-1);
    for(int val: a){
        cout<<val<<" ";
    }
}
