#include<bits/stdc++.h>
using namespace std;

char getNextChar(char ch){
    if(ch == 'z') {
        return 'a';
    } else {
        return ch + 1;
    }
}

int main() {
    cout << getNextChar('y') << endl;
    cout << getNextChar('z') << endl;
    return 0;
}