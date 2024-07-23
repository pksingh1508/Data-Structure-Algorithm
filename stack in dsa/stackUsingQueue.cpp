//----------------MOTIVATION IS TEMPORARY BUT DISCIPLINE IS PERMANENT--------------------
#include<iostream>
#include<queue>
using namespace std;

class myStack {
    private:
        deque<int> q;
    public:
        void push(int data) {
            q.push_back(data);
        }

        int pop() {
            int value = q.back();
            q.pop_back();
            return value;
        }

        int top() {
            int value = q.back();
            return value;
        }

        bool empty() {
            if(q.empty()){
                return true;
            }
            else {
                return false;
            }
        }
};

int main(){

    myStack st;
    st.push(12);
    st.push(10);
    st.push(17);
    st.push(13);

    int a = st.pop();
    cout << a << endl;

    cout << st.top() << endl;
    cout << st.empty() << endl;

return 0;
}