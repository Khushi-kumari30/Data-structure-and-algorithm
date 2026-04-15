#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,int st,int mid,int end){
vector<int>temp;
int i = st,j=mid+1;
while(i<=mid && j<= end){
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
while(j <= end){
    temp.push_back(a[j]);
    j++;
}
 for(int idx =0;idx <temp.size();idx++){
        a[idx+st] = temp[idx];
    }
}
void mergesort(vector<int>&a,int start,int end){
    if(start < end){
        int mid = start + (end - start)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
double findMedian(vector<int>& a){
    int n = a.size();
    int median = 0;
    if(n % 2 == 0){
    return (a[n/2 - 1] + a[n/2]) / 2.0;
    }
    else{
    return a[n/2];
    }
}

int main(){
vector<int> a = {1,3,4,7,10,12};
    vector<int> b = {2,3,6,15};
    vector<int> merged;
    merged.insert(merged.end(), a.begin(), a.end());
    merged.insert(merged.end(), b.begin(), b.end());
    mergesort(merged, 0, merged.size() - 1);
     double median = findMedian(merged);
    cout << "Median: " << median << endl;
}
