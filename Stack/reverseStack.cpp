#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int temp) {
    if(s.empty()) {
        s.push(temp);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottom(s, temp);
    s.push(top);
}

void reverseStack(stack<int> &s) { // TC = O(n^2) SC = O(n)
    // base case
    if(s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    // recursion
    reverseStack(s);
    // backtrack
    pushAtBottom(s, temp);
}

void printStack(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "original stack: ";
    printStack(s);

    reverseStack(s);
    cout << "reversed stack: ";
    printStack(s);

    return 0;
}