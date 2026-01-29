#include<iostream>
using namespace std;

int tilingProblem(int n){
    // base case
    if(n == 0 || n == 1){
        return 1;
    }

    // vertical
    int ans1 = tilingProblem(n-1);

    // horizontal
    int ans2 = tilingProblem(n-2);

    // final ans
    return ans1 + ans2;
}

int main() {
    cout << tilingProblem(0) << endl;
    cout << tilingProblem(1) << endl;
    cout << tilingProblem(2) << endl;
    cout << tilingProblem(3) << endl;
    cout << tilingProblem(4) << endl;
    cout << tilingProblem(5) << endl;

    return 0;
}