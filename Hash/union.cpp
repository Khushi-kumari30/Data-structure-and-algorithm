#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int>a = {1, 2, 3, 4, 5};
    vector<int>b =  {3, 4, 5, 6, 7};
    unordered_set<int>set;
    for(int i=0;i<a.size();i++){
        set.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        set.insert(b[i]);
    }
    cout<<set.size()<<endl;
    for(auto it = set.begin() ; it != set.end();it++){
        cout<<*it<<" ";
    }


}
