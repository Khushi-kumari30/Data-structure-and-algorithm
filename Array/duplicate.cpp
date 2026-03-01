#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr ={3,1,3,4,2};
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i - 1]){
            cout<<arr[i]<<endl;
            break;
        }
    }
}
