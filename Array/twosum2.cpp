#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {2,7,9,11};
    int n = a.size();
    int i = 0;
    int tar = 13;
    int j = n-1;
    int sum = 0;
    while(i < j){
        sum = a[i] + a[j];
      if(sum == tar){
        cout<<i <<" "<< j;
        return 0;
     }else if(sum < tar){
        i++;
     }else{
        j--;
     }
        }
}
