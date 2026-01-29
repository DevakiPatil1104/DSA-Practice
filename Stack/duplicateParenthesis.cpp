#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool duplicateParenthesis(string str) {
    stack<char> s;

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];

        if(ch != ')') {
            s.push(ch);
        } else {
            if(s.top() == '(') {
                return true;
            }
            while(s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main() {
    string str1 = "((a+b)+(c-d))";
    cout << duplicateParenthesis(str1) << endl;
    string str2 = "((a+b))";
    cout << duplicateParenthesis(str2) << endl;
    string str3 = "(())";
    cout << duplicateParenthesis(str3) << endl;
    return 0;
}