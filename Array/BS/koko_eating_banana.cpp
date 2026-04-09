#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&a,int h){
int totalHr = 0;
for(int i=0;i<a.size();i++){
    totalHr += ceil((double)a[i] / h);
}
return totalHr;
}
int BS(vector<int>&a,int h){
    int low = 1,high = *max_element(a.begin(),a.end());
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low + high)/2;
        int totalhrs = func(a,mid);

        if(totalhrs <= h){
          ans = mid;
          high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}
int main(){
vector<int>a = {3,6,7,11};
int h = 8;
int ans = BS(a,h);
cout<<ans;

}
