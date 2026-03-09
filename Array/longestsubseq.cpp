#include<bits/stdc++.h>
using namespace std;
void longsubseqbrute(vector<int>&a){
    int n = a.size();
    int len = 0;
    int k = 10;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum =0;
            for(int k = i;k<=j;k++){
                sum  += a[k];
            }
            if(sum == k){
           len = max(len,j-i+1);
            }
        }
    }
    cout<<len;

}
void longestsubopti(vector<int>&a){
    //using 2 pointer
    //TC -> O(2n)
    int left = 0,right = 0;
    int k = 6;
    long long sum  = a[0];
    int maxlen = 0;
    int n = a.size();
    while(left <= right && right < n){
        if(sum > k){
           sum -= a[left];
           left++;
        }
        if(sum == k){
            maxlen = max(maxlen,right - left +1);
        }
        right++;
        if(right < n)
        sum += a[right];

    }
    cout <<maxlen;

}
int main(){
    vector<int>a = {1,2,3,1,1,1,4,2,3};
   // longsubseqbrute(a);
   longestsubopti(a);
}
