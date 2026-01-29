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

    bool hasCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }
        }
        return false;
    }

    void removeCycle(Node* head) {
        // detect cycle
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                cout << "cycle exists.." << endl;
                isCycle = true;
                break;
            }
        }

        if(!isCycle) {
            cout << "cycle doesnt exists.." << endl;
            return;
        }

        slow = head;

        if(slow == fast) { //special case: tail meets head to make a loop
            while(fast->next != slow) {
                fast = fast->next;
            }
            fast->next = NULL;
        } else { //normal case with a loop
            Node* prev = fast;

            while(slow != fast) {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL; //cycle removed
        }
    }

int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    //1->2->3->4->5->NULL
    
    ll.tail->next = ll.head;

    removeCycle(ll.head);
    ll.printList();

    return 0;
}