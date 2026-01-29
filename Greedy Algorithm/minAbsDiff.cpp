#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A = {4, 1, 8, 7};
    vector<int> B = {2, 3, 6, 5};

    // vector<int> A = {2, 1, 3};
    // vector<int> B = {1, 3, 2};
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int minAbsDiff = 0;

    for(int i=0; i<A.size(); i++) {
        minAbsDiff += abs(A[i] - B[i]);
    }

    cout << "min absolute diff = " << minAbsDiff << endl;

    return 0;
}