#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int val) { //TC = O(n)
    // base case
    if(s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    // recursion
    pushAtBottom(s, val);
    // backtracking
    s.push(temp);
}

int main() {
    stack<int> s; 

    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s, 4);

    while(!s.empty()) {
        cout << s.top() << " "; //1 2 3 4
        s.pop();
    }
    cout << endl;
    return 0;
}