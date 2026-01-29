#include<bits/stdc++.h>
using namespace std;

// LC 1480. Running Sum of 1d Array

// Brute Force Approach with TC = O(n^2)
void runningSum1(int* nums, int n){
    int result[n];

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0 ; j<=i; j++){
            sum += nums[j];
        }
        result[i] = sum;
    }
    cout << "Resultant array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

// Optimized Better solution => Prefix Sum => TC = O(n)
void runningSum2(int* nums, int n){
    int result[n];
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += nums[i];
        result[i] = sum;
    }

    cout << "Resultant array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

// in-place Optimal Solution => TC = O(n) & SC = O(1)
// make changes in og array instead of new resultarray
void runningSum3(int* nums, int n){
    for(int i=1; i<n; i++){ // start loop from arr[1] to add arr[0] in it..... arr[-1] is invalid
        nums[i] += nums[i-1];
    }

    cout << "Resultant array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[6] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(nums)/sizeof(int);

    runningSum3(nums, n);
    return 0;
}