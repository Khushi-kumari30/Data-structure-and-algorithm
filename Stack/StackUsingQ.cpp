#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    void push(int x) {
        int s = q.size();
        q.push(x);

        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int a = q.front();
        q.pop();
        return a;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top: " << st.top() << endl;  // 3

    cout << "Pop: " << st.pop() << endl; // 3

    cout << "Top: " << st.top() << endl; // 2

    cout << "Is Empty? " << st.empty() << endl; //0

    st.pop();
    st.pop();

    cout << "Is Empty? " << st.empty() << endl; //1

}
