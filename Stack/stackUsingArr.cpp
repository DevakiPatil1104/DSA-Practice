#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int capacity;
    int topIdx;

public:
    Stack(int cap = 2) {
        capacity = cap;
        arr = new int[capacity];
        topIdx = -1;
    }
};

int main() {
    Stack s;
    return 0;
}