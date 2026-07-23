//Bitwise And of no. Range
#include<bits/stdc++.h>
using namespace  std;
vector<int> rangeee(int left,int right){
    vector<int>a;
    for(int i=left;i<=right;i++){
      a.push_back(i);
    }
    return a;
}
 int rangeBitwiseAnd(int left, int right) {
          vector<int>b = rangeee(left,right);
          int andd = b[0];
          for(int i=1;i<b.size();i++){
            andd = andd & b[i];
          }
          return andd;
    }
int rangeBitwiseAndOptimal(int left, int right) {
         int shift= 0;
          while(left != right){
            left = left >> 1;
            right = right >> 1;
            shift++;
          }
          int ans = left<<shift;
          return ans;
    }

int main(){
int l = 1;
int r = 2;
vector<int>ar = rangeee(l,r);
for(int i=1;i<ar.size();i++){
    cout<<ar[i] <<" ";
}
cout<<endl;
cout<<rangeBitwiseAnd(5,7)<<endl;;

cout<<rangeBitwiseAndOptimal(5,7);

return 0;
}
