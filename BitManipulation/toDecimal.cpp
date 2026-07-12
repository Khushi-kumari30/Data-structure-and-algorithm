#include<bits/stdc++.h>
using namespace std;
int Convert2Decimal(string x){
    int len = x.size();
    int p2 = 1;
    int num = 0;
    for(int i = len-1;i>=0;i--){
        if(x[i] == '1')
        num += p2;

        p2 = p2 * 2;
    }
    return num;

}

int main(){
    string x = "100";
    cout<<Convert2Decimal(x);
}
