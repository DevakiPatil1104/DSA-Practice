#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main() {
    // char arr[10] = {'a', 'b', 'c', 'd'}; // doesnt end with null terminating char \0 so rest values will be garbage 
    // cout << arr << endl;

    // char word[5] = "code";
    // char print[] = {'c', 'o', 'd', 'e', '\0'} ;
    
    // cout << word << endl;
    // cout << "length of word is : " << strlen(word) << endl;
    // cout << endl;

    // cout << print << endl;
    // cout << "length of print is : " << strlen(print) << endl;
    // cout << "size of print is: " << sizeof(print) << endl;
    // cout << endl;

    // char sent[30];
    // cout << "enter a sentence: ";
    // // cin >> sent;
    // cin.getline(sent, 30);
    // cout << sent << endl;
    // cout << "length of sentence is : " << strlen(sent) << endl;
    // cout << "first letter of sentence: " << sent[0] << endl;

    char str1[50] = "hello";
    char str2[50] = "world";

    // cout << "before strcpy str1: " << str1 << endl;
    // strcpy(str1, str2); // string copy
    // cout << "after strcpy str1: " << str1 << endl;

    cout << "before strcat str1: " << str1 << endl;
    strcat(str1, str2); // string concatenate
    cout << "after strcat str1: " << str1 << endl;

    char str3[5] = "abc";
    char str4[5] = "xyz";

    cout << strcmp(str3, str4) << endl; // abc < xyz => -ve
    return 0;
}