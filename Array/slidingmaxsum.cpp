#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>a = {-5, -2, -8, -1};
    int  k = 2;
    int windsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<k;i++){
        windsum+= a[i];
    }
    maxsum = windsum;
    for(int i=k;i<a.size();i++){
        windsum = windsum - a[i-k] + a[i];
        maxsum = max(maxsum,windsum);
    }
    cout<<maxsum;
}
