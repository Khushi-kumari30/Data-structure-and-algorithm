#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a = {3,7,1,8,2,0};
    int n = a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1] ){
                swap(a[j] , a[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
}
