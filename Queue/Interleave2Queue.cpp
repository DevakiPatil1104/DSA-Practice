#include <iostream> 
#include <queue>
using namespace std;

void interleave(queue<int> &org) {
    queue<int> firstHalf;

    int n = org.size();

    // create firstHalf queue with 1 2 3 4 5 
    for(int i=0; i<n/2; i++) {
        firstHalf.push(org.front());
        org.pop();
    }

    while(!firstHalf.empty()) {
        org.push(firstHalf.front());
        firstHalf.pop();
        
        org.push(org.front());
        org.pop();
    }
}

int main() {
    queue<int> org;

    for(int i=1; i<=10; i++) {
        org.push(i);
    }

    interleave(org);

    for(int i=1; i<=10; i++) {
        cout << org.front() << " ";
        org.pop();
    }
    cout << endl;
    return 0;
}