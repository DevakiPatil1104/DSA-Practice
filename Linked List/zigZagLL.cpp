#include<iostream>
using namespace std;

class Node {
 public:    
    int data; 
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val); 

        if(head == NULL) { 
            head = tail = newNode;  
        } else {
            newNode->next = head; 
            head = newNode; 
        }
    }

    void pop_front() {
        if(head == NULL) {
            cout << "LL is empty" << endl; 
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) { 
            head = tail = newNode; 
        } else {
            tail->next = newNode; 
            tail = newNode; 
        }
    }

    void pop_back() {
        Node* temp = head;
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next; 
        }
        cout << "NULL" << endl;
    }    
};

Node* splitAtMid(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL) {
        prev->next = NULL; //split at mid
    }
    
    return slow;
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev; //prev is head of reversed ll
}

Node* zigZagLL(Node* head) {
    Node* rightHead = splitAtMid(head);
    Node* rightHeadRev = reverse(rightHead);

    // alternate merging: (1st List's head = head) & (2nd list's head = rightHeadRev)
    Node* left = head;
    Node* right = rightHeadRev;
    Node* tail = NULL;

    while(left != NULL && right != NULL) {
        Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

        tail = right;

        // update left and right
        left = nextLeft;
        right = nextRight;
    }
    // for odd sized ll where right is not yet NULL
    if(right != NULL) {
        tail->next = right;
    }

    return head;
}

int main() {
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList(); //1->2->3->4->5->NULL

    zigZagLL(ll.head);
    ll.printList(); //1->5->2->4->3->NULL

    return 0;
}