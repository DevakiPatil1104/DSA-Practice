#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> ll) {
    list<int>::iterator itr;

    for(itr = ll.begin(); itr != ll.end(); itr++) {
        cout << (*itr) << " -> ";
    }
    cout << "NULL" << endl;
}

int main() {
    list<int> ll; //create a linked list

    ll.push_front(20); //20->NULL
    ll.push_front(10); //10->20->NULL

    ll.push_back(30); //10->20->30->NULL
    ll.push_back(40); //10->20->30->40->NULL
    ll.push_back(50); //10->20->30->40->50->NULL

    printList(ll);

    cout << "size = " << ll.size() << endl;

    cout << "head = " << ll.front() << endl;
    cout << "tail = " << ll.back() << endl;

    ll.pop_front();
    printList(ll); //20->30->40->50->NULL
    ll.pop_back();
    printList(ll); //20->30->40->NULL
    return 0;
}