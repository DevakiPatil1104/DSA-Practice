#include<iostream>
#include<string.h>
using namespace std;

void reverse(char word[], int n){
    int st=0, end=n-1;

    while(st < end){
        swap(word[st], word[end]);
        st++, end--;
    }
}

int main() {
    char word[] = "photosynthesis";
    int n = strlen(word);

    cout << "original : " << word << endl;

    reverse(word, n);
    cout << "reverse : " << word << endl;

    return 0;
}