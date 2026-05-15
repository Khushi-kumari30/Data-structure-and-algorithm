#include<bits/stdc++.h>
using namespace std;
int LongestSubString(string a){
    int maxi = 0;
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
            bool repeat = false;
            for(int k=i;k<j;k++){
              if(a[k] == a[j]){
                repeat= true;
                break;
              }
            }
           if(repeat)
           break;
          maxi = max(maxi,j-i+1);
            }
        }
return maxi;
}
int main(){
    string s = "ababc";
    cout<<LongestSubString(s);
    return 0;
}
