#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a = {0,3,1,0,4,5,2,0};
vector<int>ans;
int sum =0;
for(int i=0;i<a.size();i++){
if(a[i] != 0){
    sum += a[i];
}else {
if(sum > 0){
    ans.push_back(sum);
    sum =0;
}
}
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<"  ";
}
}
