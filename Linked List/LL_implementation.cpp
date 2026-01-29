#include<iostream>
using namespace std;

class Node {
 public:    
    int data; 
    Node* next;

public:
    Node(int val) {
        data = val;
        next = NULL;
    }

    ~Node() {
        // cout << "~Node for data " << data << endl;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    ~List() {
        // cout << "~List" << endl;
        if(head != NULL) {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val); // "new" keyword : dynamic allocation which doesnt depend on function working span...it wont get erased once function is completely executed like as static var

        if(head == NULL) { // check if LL is empty
            head = tail = newNode; //only 1 node in ll 
        } else {
            newNode->next = head; //place newNode before head(build connection) ... {head -> NULL} => {newNode -> head(NULL)} => {(head)newNode -> NULL}
            head = newNode; // move head backward to assign it to newNode
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) { //if ll is empty
            head = tail = newNode; //only 1 node in ll 
        } else {
            tail->next = newNode; //build connection
            tail = newNode; //assign new node as tail
        }
    }

    void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next; //traverse the ll
        }
        cout << "NULL" << endl;
    }

    void insert(int val, int pos) {
        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i=0; i<pos-1; i++) {
            if(temp == NULL) { // no ll present so pos will be invalid (edge case)
                cout << "position is INVALID" << endl;
                return;
            }
            temp = temp->next;
        } // temp is at pos-1 now

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "LL is empty" << endl; // edge case
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
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

    int searchItr(int key) {  //TC => O(n)
        Node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }

        return -1; //NOT_FOUND
    }

    int helper(Node* head, int key) {
        // base case
        if(head == NULL) {
            return -1;
        }
        // work
        if(head->data == key) {
            return 0;
        } 
        // recursive call
        int idx = helper(head->next, key);

        if(idx == -1) return -1;
        return idx+1;

    }

    int searchRec(int key) {
        return helper(head, key);
    }

    void reverseLL() {
        Node* curr = head; //(2nd) pointer
        Node* prev = NULL; //(1st) pointer

        while(curr != NULL) {
            Node* next = curr->next; //create next (3rd) pointer

            curr->next = prev; //reverse the connection (connect curr backwards)

            // updations (move prev and curr forward each time)
            prev = curr;
            curr = next;
        }
        head = prev; //update newHead of reverse LL
    }

    int llSize() {
        int size = 0;
        Node* temp = head;

        while(temp != NULL) {
            temp = temp->next;
            size++;
        }

        return size;
    }

    void removeNth(int n) {
        int size = llSize();

        Node* prev = head;

        for(int i=1; i<(size-n); i++){ //i=size-n => prev => prev of deletion node
            prev = prev->next;
        }

        Node* toDel = prev->next;
        cout << "going to delete: " << toDel->data << endl;
        prev->next = toDel->next;
    }
};

int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //1->2->3->NULL
    // ll.printList();

    ll.push_back(4);
    // ll.printList();  //1->2->3->4->NULL

    // ll.insert(100, 3);
    // ll.printList();  //1->2->3->100->4->NULL

    // ll.pop_front();
    // ll.printList();  //2->3->100->4->NULL

    // ll.pop_back();
    // ll.printList();  //2->3->100->NULL

    // cout << ll.searchItr(100) << endl; //ans=2
    // cout << ll.searchRec(3) << endl; //ans=1

    // ll.reverseLL();
    // ll.printList(); // 4->3->2->1->NULL

    ll.push_back(5);
    ll.printList();  //1->2->3->4->5->NULL

    ll.removeNth(2);
    ll.printList();
    return 0;
}