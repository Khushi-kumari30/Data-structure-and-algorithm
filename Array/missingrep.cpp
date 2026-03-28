#include<bits/stdc++.h>
using namespace std;
void missingAndrep(vector<int>&a){
   int n = a.size();
   int rep = -1,missing=-1;
   vector<int> hash(n+1, 0);
   for(int i=0;i<n;i++){
   hash[a[i]]++;
   }
   for(int i=0;i<n;i++){
    if(hash[i] == 2) rep = i;
    else if(hash[i] == 0) missing = i;
   }
   cout<<rep<<" "<<missing<<" ";

}
void missingAndrepOpti(vector<int>&a){
    int n = a.size();
    long long sum1 = 0,sum2 = 0;
    long long sn = 1LL * n * (n+1)/2;
    long long sn2 = 1LL * (n*(n+1)*(2*n+1))/6;
    for(int i=0;i<n;i++){
        sum1 += a[i];
        sum2 += (long long)a[i]*(long long)a[i];
    }
    long long val1 = sum1 - sn;//x-y
    long long val2 = sum2 - sn2;
    val2 = val2 / val1; //x + y
    long long x = (val1 + val2)/2;
    long long y = x - val1;

    cout<<x <<" "<<y;

}
int main(){
     vector<int>a = {1,2,2,4,5,6};
    // missingAndrep(a);
    missingAndrepOpti(a);
}
