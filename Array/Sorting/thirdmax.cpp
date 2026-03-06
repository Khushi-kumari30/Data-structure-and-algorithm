#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {2,5,3,1};
    int n = a.size();
    int f = INT_MIN;
    for(int i=0;i<n;i++){
      if(a[i] > f){
        f = a[i];
      }
    }
    int s = INT_MIN;
    for(int i=0;i<n;i++){
      if(a[i] < f && a[i] > s){
        s = a[i];
      }
    }
    int t = INT_MIN;
    for(int i=0;i<n;i++){
      if(a[i] < f && a[i] < s && a[i] > t){
        t = a[i];
      }
    }
    cout<<f<<" "<<endl;
    cout<<s<<endl;
     cout<<t<<endl;
}
