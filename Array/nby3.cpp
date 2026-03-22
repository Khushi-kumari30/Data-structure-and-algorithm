vector<int>majorityopti(vector<int>&a){
    int cnt1 = 0,cnt2 = 0;
    int el1 = INT_MIN,el2 = INT_MIN;
    for(int i=0;i<a.size();i++){
        if(cnt1 == 0 && el2 != a[i]){
            cnt1 = 1;
            el1 = a[i];
        }else if(cnt2 == 0 && el1 != a[i]){
            cnt2 = 1;
            el2 = a[i];
        }else if(a[i] == el1)cnt1++;
        else if(a[i] == el2)cnt2++;
        else{
            cnt1--,cnt2--;
        }
    }

    vector<int>ans;
    cnt1=0,cnt2=0;
    for(int i=0;i<a.size();i++){
        if(el1 == a[i])cnt1++;
        if(el2 == a[i])cnt2++;
    }
    int mini = int(a.size()/3) + 1;
    if(cnt1 >= mini)ans.push_back(el1) ;
    if(cnt2 >= mini)ans.push_back(el2);

    return ans;
}
int main(){
    vector<int>a = {1,1,3,3,3,2,2,2};
    //vector<int>ans= majoritybetter(a);
    vector<int>ans= majorityopti(a);
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }
