#include<iostream>
#include<string.h>
using namespace std;

void toUpperCase(char* word, int n){
    for(int i=0; i<n; i++){
        char ch = word[i];

        if(ch >= 'A' && ch <= 'Z'){ //uppercase char
            continue;
        } else {
            word[i] = ch - 'a' + 'A';
        }
    }
}

void toLowerCase(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];

        if(ch >= 'a' && ch <= 'z'){
            continue;
        } else
        word[i] = ch - 'A' + 'a';
    }
}

int main() {
    char word[] = "PHoTOsynTheSIs";
    int n = strlen(word);

    toUpperCase(word, n);
    cout << word << endl;

    toLowerCase(word, n);
    cout << word << endl;
    return 0;
}