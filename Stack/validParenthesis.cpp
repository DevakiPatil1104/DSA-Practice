#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool validParenthesis(string str) {
    stack<char> s;

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];

        if(ch == '{' || ch == '(' || ch == '[') { //opening brackets
            s.push(ch);
        } else { //closing brackets
            if(s.empty()) {
                return false;
            }

            // match
            int top = s.top();
            if((top == '{' && ch == '}') || (top == '[' && ch == ']') || (top == '(' && ch == ')')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string str1 = "[{()}()]";
    cout << validParenthesis(str1) << endl;
    string str2 = "[{()";
    cout << validParenthesis(str2) << endl;
    string str3 = "}()]";
    cout << validParenthesis(str3) << endl;
    return 0;
}