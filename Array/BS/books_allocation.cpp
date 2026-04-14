#include<bits/stdc++.h>
using namespace std;
bool allocationPossible(vector<int>& books,int m,int maxPages){
     int students = 1;
    int currentPages = 0;
   for(int i=0;i<books.size();i++){
    if(books[i] > maxPages){
        return false;
    }
    if (currentPages + books[i] > maxPages) {
            students++;
            currentPages = books[i];
        } else {
            currentPages += books[i];
    }
    if(students > m) return false;
   }
    return true;
}

int allocateBooks(vector<int>& books, int m){
    if(m > books.size()) return -1;
    int low = *max_element(books.begin(),books.end());
    int high = accumulate(books.begin(),books.end(),0);
    int res = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(allocationPossible(books,m,mid)){
          res = mid;
          high = mid -1;
        }else{
            low = mid+1;
        }
    }
    return res;
}
int main(){
vector<int>books = {12,34,67,90};
int m = 2;
int ans = allocateBooks(books,m);
cout<<ans;

}
