#include<bits/stdc++.h>
using namespace std;
int kthElem(vector<int>&nums1,vector<int>&nums2,int n1,int n2,int k){
if(n1 > n2) return kthElem(nums2,nums1,n2,n1,k);
        int low = max(k-n2,0),high = min(k,n1);
        int left = k;
        int n = n1 + n2;
        while(low <= high){
            int mid1 = (low + high)/2;
            int mid2 = left - mid1;
            int left1 = INT_MIN;
            int left2 = INT_MIN;

            int right1 =  INT_MAX;
            int right2 =  INT_MAX;

           if(mid1 < n1) right1 = nums1[mid1];
            if(mid2 < n2) right2 = nums2[mid1];

            if(mid1 - 1 >= 0) left1 = nums1[mid1 -1];
            if(mid2 -1 >= 0) left2 = nums2[mid2 -1];
            if(left1 <= right2 && left2 <= right1){
                return max(left1,left2);
            }
            else if(left1 > right2 ) high = mid1 - 1;
            else low = mid1 + 1;
                }
        return -1;
            }

            int main(){
                vector<int>nums1 = {1,3,4,7,10,12};
                vector<int>nums2 = {2,3,6,15};
                int n1= nums1.size();
                int n2 = nums2.size();
                int k = 4;
                int ans = kthElem(nums1,nums2,n1,n2,k);
                cout<<ans;
            }
