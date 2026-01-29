#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// LC 1657. Determine if Two Strings Are Close
// Idea:
// 1. Swapping characters allows any permutation → order doesn't matter
// 2. Renaming characters swaps frequencies between existing characters
// 3. Therefore, strings are "close" if:
//    - They have the same length
//    - They contain the same set of characters
//    - Their character frequency distributions are identical
//
// Time Complexity  : O(n)
// Space Complexity : O(1)  (only 26-sized frequency arrays)

bool closeStrings(string s1, string s2){

    // Step 1: Length must be equal (cannot be changed by any operation)
    if(s1.length() != s2.length()){
        cout << "strings are not close" << endl;
        return false;
    }

    // Step 2: Frequency arrays for lowercase letters
    int freq1[26] = {0}, freq2[26] = {0};

    // Count frequency of each character in s1
    for(int i = 0; i < s1.length(); i++){
        int idx = s1[i] - 'a';   // map 'a'–'z' → 0–25
        freq1[idx]++;
    }

    // Count frequency of each character in s2
    for(int i = 0; i < s2.length(); i++){
        int idx = s2[i] - 'a';
        freq2[idx]++;
    }

    // Step 3: Check if both strings use the same set of characters
    // A character present in one string must be present in the other
    for(int i = 0; i < 26; i++){
        if((freq1[i] == 0 && freq2[i] > 0) ||
           (freq1[i] > 0 && freq2[i] == 0)){
            cout << "strings are not close" << endl;
            return false;
        }
    }

    // Step 4: Sort frequency arrays to compare frequency patterns
    // Renaming characters allows reassignment of frequencies
    sort(freq1, freq1 + 26);
    sort(freq2, freq2 + 26);

    // Step 5: Compare sorted frequency distributions
    for(int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            cout << "strings are not close" << endl;
            return false;
        }
    }

    // All checks passed → strings are close
    cout << "strings are close" << endl;
    return true;
}

int main() {
    string str1 = "abc";
    string str2 = "bca";

    closeStrings(str1, str2);
    return 0;
}
