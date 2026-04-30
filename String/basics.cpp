#include<bits/stdc++.h>
using namespace std;
int main(){
    /*string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size()<<endl;
    */
     // concatenation
    string s1 = "Abcd";
    string s2 = "efgh";
    string s3 = s1 + s2; // or s3 = s1.append(s2);
    cout<<s3<<endl;

    //push back
    s1.push_back('E');
    cout<<s1<<endl;

    //Print
     string str = "Abcd is a \"good\" boy";
     cout<<str<<endl;

     //Reverse
    string name = "Ram";
     int st = 0, end = name.size()-1;
     while(st < end){
        swap(name[st],name[end]);
        st++,end--;
     }
     cout<<name<<endl;

     //size without using size()
     int size = 0;
     while(name[size] != '\0'){
        size++;
     }
     cout<<size<<endl;

return 0;
}
