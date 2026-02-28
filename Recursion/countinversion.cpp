#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&a,int st,int mid,int end){
    vector<int>temp;
    int i = st,j = mid + 1;
    int invCnt = 0;
    while(i <= mid && j <= end){
        if(a[i] <= a[j]){
            temp.push_back(a[i]);
            i++;
        }else{
            temp.push_back(a[j]);
            j++;
            invCnt += (mid - i +1);
        }
    }
    while(i <= mid){
        temp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for(int idx = 0;idx < temp.size();idx++){
        a[idx+st] = temp[idx];
    }
    return invCnt;
}
int mergesort(vector<int>&a,int st,int end){
     if (st >= end) return 0;
    if(st < end){
        int mid = st + (end - st)/2;
        int leftInvCnt = mergesort(a,st,mid);
        int rightInCnt = mergesort(a,mid + 1,end);
        int invCnt = merge(a,st,mid,end);
        return leftInvCnt + rightInCnt + invCnt;
}
}
int main(){
    vector<int>a = {6,3,5,2,7};
    int ans = mergesort(a,0,a.size() -1);
    cout<<"inversion count: "<< ans <<endl;
    return 0;
}
