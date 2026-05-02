#include<bits/stdc++.h>
using namespace std;
void rotateclockwise(string &s){
char c = s[s.size() - 1];
int index = s.size()-2;
while(index >=0){
s[index+1] = s[index];
index--;
}
s[0] = c;

}
void rotateAnticlockwise(string &s){
    char c = s[0];
    int index = 1;
    while(index < s.size()){
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}
bool isRotated(string s1,string s2){
   string clockwise = s1,anticlock = s1;
   rotateclockwise(clockwise);
   rotateclockwise(clockwise);

   if(clockwise == s2){
    return 1;
   }
rotateAnticlockwise(anticlock);
rotateAnticlockwise(anticlock);
if(anticlock == s2){
    return 1;
}
return 0;
}

int main(){
string s1 = "amazon";
string s2 = "azonam";
cout<<isRotated(s1,s2);

}
