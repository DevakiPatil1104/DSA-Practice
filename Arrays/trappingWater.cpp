#include<bits/stdc++.h>
using namespace std;

// LC 42. Trapping Rain Water

void trap(int *heights, int n){
    int leftMax[20000], rightMax[20000];
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    cout << leftMax[0] << ", ";
    for(int i=1; i<n; i++){ //TC = O(n)
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
        cout << leftMax[i] << ", ";
    }
    cout << endl;
    cout << endl;

    cout << rightMax[n-1] << ", ";
    for(int i=n-2; i>=0; i--){ //TC = O(n)
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
        cout << rightMax[i] << ", "; // values printed backwards
    }
    cout << endl;
    cout << endl;

    int waterTrapped = 0;
    for(int i=0; i<n; i++){ //TC = O(n)
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];

        if(currWater > 0){
            waterTrapped += currWater;
        }
    }
    cout << "Total water trapped = " << waterTrapped << endl;
}

// Final TC = O(3n) = O(n)

int main() {
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights)/sizeof(int);

    trap(heights, n);
    return 0;
}