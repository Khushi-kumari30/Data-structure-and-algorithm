#include<bits/stdc++.h>
using namespace std;
void PrintSubSeq(int i,string s,vector<char>&ds){
    // base case
    if(i >= s.size()){
        for(char ch : ds){
            cout <<ch;
        }
        cout<<endl;
        return;
    }

    ds.push_back(s[i]);
    PrintSubSeq(i+1,s,ds);

    ds.pop_back();
    PrintSubSeq(i+1,s,ds);

}
int main(){
string s = "abc";
vector<char>ds;
PrintSubSeq(0,s,ds);
}
