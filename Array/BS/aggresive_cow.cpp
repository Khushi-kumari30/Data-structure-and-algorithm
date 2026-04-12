#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>& stalls, int cows, int dist){
    int cntCows = 1,last = stalls[0];
    for(int i =0;i<stalls.size();i++){
        if(stalls[i] - last >= dist){
            cntCows++;
            last = stalls[i];
        }
    }
    if(cntCows >= cows) return true;
    else
    return false;
}
int maxDistance(vector<int>& position, int cows) {
int ans = -1;
int n = position.size();
int low = 0,high = n-1;
while(low <= high){
int mid = (low + high)/2;
if(canWePlace(position,mid,cows) == true){
    ans = mid;
    low = mid + 1;
}else{
    high = mid - 1;
}
}
return ans;
}
int main(){
vector<int>stalls = {0, 3, 4, 7, 9, 10};  // positions
int cows = 4;
int ans = maxDistance(stalls,cows);
cout<<ans<<endl;
return 0;
}
