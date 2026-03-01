#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,-1,3,-3,-4};
    int n = arr.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
                sum += arr[j];
                if(sum == 0){
                 cout << arr[j] << " ";
        }
    }
    }
    return 0;
}
