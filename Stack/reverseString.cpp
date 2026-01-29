#include <iostream>
#include <stack>
using namespace std;

string reverseStr(string str) { //TC = SC = O(n)
    string ans;
    stack<char> s;

    for(int i=0; i<str.size(); i++) {
        s.push(str[i]);
    }

    while(!s.empty()) {
        char temp = s.top();
        s.pop();
        ans += temp;
    }

    return ans;
}

int main() {
    string str = "devaki";

    cout << "original : " << str << endl;
    cout << "reverse : " << reverseStr(str) << endl;
    return 0;
}