#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2, 3, 1, 4, 5};
    int n = arr.size();
    int k = 6;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
                sum += arr[j];
                if(sum == k){
                    for(int x=i;x<=j;x++){
                        cout<<arr[x]<<" ";
                    }
        }
    }
    }
    return 0;
}
