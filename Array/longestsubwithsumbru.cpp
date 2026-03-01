#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {2,5,1,7,10};
    int n = a.size();
    int k = 14;
    int maxlen = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(sum <= k){
                maxlen = max(maxlen,j-i+1);
            }else{
                if(sum >k){
                    break;
                }
            }
        }
    }
    cout<<maxlen<<endl;

}
