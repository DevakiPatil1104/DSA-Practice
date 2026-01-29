#include <iostream>
using namespace std;

// stack using linked list
template<class T>
class Node {
public:
    T data;
    Node* next;
    Node(T val) {
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack {
public:
    Node<T>* head;

    Stack() {
        head = NULL;
    }

    void push(T val) {
        // ll push_front
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        // ll pop_front
        if(head == NULL) {
            cout << "list is empty";
            return;
        } else {
            Node<T>* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    T top() {
        return head->data; //val of head of ll
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()) {
        cout << s.top() << " "; //1 2 3
        s.pop();
    }
    cout << endl;
    return 0;
}