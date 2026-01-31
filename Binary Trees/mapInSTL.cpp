#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> m;

    m[101] = "rahul";
    m[119] = "neha";
    m[131] = "rahul";
    m[146] = "amol";

    cout << m[101] << endl;
    cout << m[119] << endl;
    // cout << m[200] << endl; //empty key

    cout << m.count(101) << endl; //1 -> this key exists already
    cout << m.count(201) << endl; //0 -> this key does not exist

    cout << endl;

    for(auto iterator: m) {
        cout << "key: " << iterator.first << "    " << "value: " << iterator.second << endl;
    }

    return 0;
}