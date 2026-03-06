#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>a = {13,46,24,52,20,9};
int n = a.size();
for(int i=0;i<=n-2;i++){
    int mini = i;
    for(int j=i;j<=n-1;j++){
        if(a[j] < a[mini]){
           mini = j;
        }
        swap(a[i],a[mini]);
       /*int temp = a[mini];
       a[mini] = a[i];
       a[i] = temp;
        }*/
}
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
