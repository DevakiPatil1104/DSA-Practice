#include<bits/stdc++.h>
using namespace std;

// Brute force approach with TC = O(n3)
void maxSubarraySum1(int arr[], int n){ 
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
                maxSum = max(maxSum, currSum); // max is in-built func in c++ lib
            }
            cout << currSum << ", ";
        }
        cout << endl;
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

// Slightly optimized soln with TC = O(n2)
void maxSubarraySum2(int arr[], int n){ 
    int maxSum = INT_MIN;

    for(int start=0; start<n; start++){ // start = same
        int currSum = 0;
        for(int end=start; end<n; end++){ // add end each time to previous sum
                currSum += arr[end]; // running(prefix) sum
                maxSum = max(maxSum, currSum); 
            }
        cout << endl;
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum1(arr, n);

    maxSubarraySum2(arr, n);
    return 0;
}