#include<bits/stdc++.h>
using namespace std;

// LC 20. Valid Parentheses
// TC => O(n)

bool isValid(string s){
    vector<char> v;

    if(s.size() % 2 != 0){ // odd no. of chars in string then invalid for sure
        return false;
    } 

    for(int i=0; i<s.size(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            v.push_back(s[i]);
        } else {
            if(v.size() > 0){
                if (s[i] == '}' && v.back() == '{') {
                    v.pop_back();
                } else if (s[i] == ')' && v.back() == '(') {
                    v.pop_back();
                } else if (s[i] == ']' && v.back() == '[') {
                    v.pop_back();
                } else {
                    cout << " not valid parentheses" << endl;
                    return false;
                }
            } else {
                cout << " not valid parentheses" << endl;
                return false;
            }
        }
    }
    if(v.size() == 0){
        cout << "valid parentheses" << endl;
        return true;
    }
    else 
    cout << " not valid parentheses" << endl;
    return false;
}

int main() {
    string s = "[]";
    isValid(s);
    return 0;
}
