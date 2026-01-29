#include<iostream>
using namespace std;

void binaryStr(int n, int lastPlace, string ans){
    if(n == 0){
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1){
        binaryStr(n-1, 0, ans+'0');
        binaryStr(n-1, 1, ans+'1');
    } else {
        binaryStr(n-1, 0, ans+'0');
    }
}

void binaryStr(int n, string ans){  // without using lastPlace var
    if(n == 0){
        cout << ans << endl;
        return;
    }

    if(ans[ans.size()-1] != '1'){
        binaryStr(n-1, ans+'0');
        binaryStr(n-1, ans+'1');
    } else {
        binaryStr(n-1, ans+'0');
    }
}

int main() {
    string ans = "";
    int lastPlace = 0;

    // binaryStr(0, lastPlace, ans);
    // binaryStr(1, lastPlace, ans);
    // binaryStr(2, lastPlace, ans);
    binaryStr(3, ans);
    return 0;
}