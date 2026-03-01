#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>a = {0,1,4,3,2};
    int n = a.size();
  /*   unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    if(freq[a[i]] > n/2){
        cout<<a[i];
    }
    }
    */
  int freq = 0,ans = 0;
  for(int i=0;i<n;i++){
      if(freq == 0){
          ans = a[i];
      }
      if(ans == a[i]){
          freq++;
      }else{
          freq--;
      }
  }
  int count = 0;
  for(int val : a){
      if(val == ans){
          count++;
      }
  }
  if(count > n/2){
  cout<<ans;
  }else{
      cout<<"-1";
  }
}
