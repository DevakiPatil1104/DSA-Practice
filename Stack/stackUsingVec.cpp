#include <iostream>
#include <vector>
using namespace std;

template<class T>

class Stack {
    vector<T> vec;
public:
    void push(T val) {
        vec.push_back(val);
    }

    void pop() {
        if(isEmpty()) {
            cout << "stack empty..no element to pop \n";
            return;
        }
        vec.pop_back();
    }

    T top() {
        if(isEmpty()) {
            cout << "stack is empty \n";
            return T();
        }
        return vec.back();    
    }

    bool isEmpty() {
        return (vec.size() == 0);
    }
};

int main() {
    Stack<char> s;

    s.push('a');
    s.push('b');
    s.push('c');

    while(!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}