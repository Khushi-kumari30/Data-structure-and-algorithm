#include<bits/stdc++.h>
using namespace std;
void subarrySumequtosumK(vector<int>&a){
int count =0;
int k = 3;
for(int i=0;i<a.size();i++){
    int sum = 0;
    for(int j=i;j<a.size();j++){
      sum += a[j];
    if(sum == k){
      count++;
    }
}
}
cout<<count;
}
void subarrySumequtosumKopti(vector<int>nums){
    map<int,int>mp;
    int k = 3;
    mp[0] = 1;
    int preSum = 0,cnt = 0;
    for(int i=0;i<nums.size();i++){
        preSum += nums[i];
        int remove = preSum - k;
        cnt += mp[remove];
        mp[preSum]++;
    }
cout<<cnt;
}
int main(){
vector<int> a= {1,2,3,-3,1,1,1,4,2,-3};
//subarrySumequtosumK(a);
subarrySumequtosumKopti(a);
}
