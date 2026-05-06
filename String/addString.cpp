#include<bits/stdc++.h>
using namespace std;
string stringADD(string s1,string s2){
int index1 = s1.size()-1;
int index2 = s2.size()-1;
string ans;
int carry = 0;
int sum =0;
while(index2 >=0){
    sum = (s1[index1] - '0') + (s2[index2] - '0') + carry;
    carry = sum /10;
    char c = '0' + sum%10;
    ans += c;
    index2--,index1--;
}

while(index1 >= 0){
    sum = (s1[index1] - '0') + carry;
    carry = sum /10;
    char c = '0' + sum %10;
    ans += c;
    index1--;
}

if(carry){
    ans += '1';
}
reverse(ans.begin(),ans.end());
return ans;
}
int main(){
string num1 = "11", num2 = "123";
if(num1.size() < num2.size()){
    cout<<stringADD(num2,num1);
}else{
cout<<stringADD(num1,num2);
}
}
