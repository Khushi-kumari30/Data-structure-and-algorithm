#include<bits/stdc++.h>
using namespace std;
bool Pangram(string sentence){
    unordered_set<char>c(sentence.begin(),sentence.end());
    if(c.size() == 26){
        return true;
    }
    return false;
}
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout<<Pangram(s);
}
