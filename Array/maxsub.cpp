#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {-2,1,-3,4,-1,2,1,-5,4};
    int maxsum = INT_MIN;
    int currsum = 0;
    int n = a.size();
    for(int i=0;i<n;i++){
        currsum += a[i];
        maxsum = max(maxsum,currsum);
        if(currsum < 0){
            currsum = 0;
        }
     //   cout<< maxsum;
    }
      cout<< maxsum;

}
