#include <iostream>
#include <deque>
using namespace std;

class Stack {
    deque<int> deq;

public:
    void push(int data) {
        deq.push_back(data);
    }

    void pop() {
        deq.pop_back();
    }

    int top() {
        return deq.back();
    }

    bool empty() {
        return deq.empty();
    }
};

int main() {
    Stack s;

    for(int i=1; i<=5; i++) {
        s.push(i);
    }

    for(int i=1; i<=5; i++) { // 5 4 3 2 1
        cout << s.top() << endl; 
        s.pop();
    }

    return 0;
}