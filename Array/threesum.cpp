#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {-1,0,1,2,-1,4};
    int n = a.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j+1;k<n;k++)
                if(a[i] + a[j] + a[k] == 0){
                    cout<<a[i]<<" " << a[j] <<" "<< a[k]<<endl;
                }

        }
    }
}
