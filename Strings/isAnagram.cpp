#include<iostream>
#include<string.h>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout << "not a valid anagram" << endl;
        return false;
    }

    int count[26] = {0};
    for(int i=0; i<str1.length(); i++){
        int idx = str1[i] - 'a'; // to find position of each char in string1
        count[idx]++; // incr count for that char on that index in count arr
    }

    for(int j=0; j<str2.length(); j++){
        int idx = str2[j] - 'a';

        if(count[idx] == 0){
            cout << "not a valid anagram" << endl;
            return false;
        }
        count[idx]--;
    }

    cout << "valid anagram" << endl;
    return true;
}

int main() {
    string str1 = "race";
    string str2 = "care";

    isAnagram(str1, str2);
    return 0;
}