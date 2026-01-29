#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permutation(string str, string ans){
    if(str.size() == 0){
        cout << ans << endl;
        return;
    }

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        int n = str.size();
        string nextStr = str.substr(0, i) + str.substr(i+1, n-i-1);
        permutation(nextStr, ans+ch);
    }
}

int main() {
    string str = "abc";
    string subset = "";

    permutation(str, subset);
    return 0;
}