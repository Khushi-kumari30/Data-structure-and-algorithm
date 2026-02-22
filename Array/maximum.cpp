#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,9,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
cout<<max;
}
