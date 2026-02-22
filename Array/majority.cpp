#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>a = {1,1,2,4,1,4,1};
    int n = 7;
    int freq =0;
    int ans = 0;
    /*sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
         freq=1;
            if(a[i] == a[i-1]){
                freq++;
            }else{
                freq = 1;
                ans = a[i];
                }
            if(freq > n/2){
            cout<< ans;
            }*/
          /*   for(int i=0;i<n;i++){
                freq = 0;
                for(int j=0;j<n;j++){
                    if(a[i] == a[j]){
                        freq++;
                    }
                }
                if(freq > n/2){
                    cout<<a[i]<<" ";
                }
                }*/
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
                cout<<ans;

    }
