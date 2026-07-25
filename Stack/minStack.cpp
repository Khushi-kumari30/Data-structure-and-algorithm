#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
stack<long long>st;
long long mini = LLONG_MAX;


    MinStack() {

    }

    void push(int value) {
        long long val = value;
        if(st.empty()){
            mini = val;
            st.push(val);
        }else if(val > mini){
            st.push(val);
        }else{
            st.push(2* val - mini);
            mini = val;
        }
    }

    void pop() {
        if(st.empty()) return;

        long long x = st.top();
        st.pop();
        if(x < mini)
        mini = 2 *mini - x;
    }

    int top() {
      if(st.empty()) return -1;

      long long x   = st.top();
      if(x < mini) return mini;
      return x;
    }

    int getMin() {
        return mini;
    }
};
int main(){
    MinStack st;

    st.push(12);
    st.push(15);
    st.push(10);
    cout<<"min: "<<st.getMin()<<endl;
    st.pop();
    cout<<"min: "<<st.getMin();
    return 0;

}
