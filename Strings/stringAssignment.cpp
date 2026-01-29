#include<iostream>
#include<string.h>
using namespace std;

// Q.1 Count how many times lowercase vowels occurred in a string entered by the user.
int countVowels(string s){
    int count = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }

    return count;
}

// Q.2 Check if it is possible to make two strings equal by performing at most one swap in exactly one string


int main() {
    string s = "umbrella"; // 3 vowels
    cout << "lowercase vowels count = " << countVowels(s) << endl;

    string s1 = "bank";
    string s2 = "kanb";
    return 0;
}