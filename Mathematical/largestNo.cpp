#include<bits/stdc++.h>
using namespace std;

int printLargest(int a, int b, int c){
    if(a>=b && a>=c) {
        return a;
    } else if(b>=a && b>=c){
        return b;
    } else {
        return c;
    }
}

int main() {
    int a,b,c,result;
    cout << "enter 3 num: " << endl;
    cin >> a >> b >> c;
    result = printLargest(a, b, c);
    cout << "largest no amongst " << a << ", " << b << ", " << c << " is: " << result;
    return 0;

}