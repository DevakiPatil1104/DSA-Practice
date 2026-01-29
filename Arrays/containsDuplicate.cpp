#include<bits/stdc++.h>
using namespace std;

// LC 217. Contains Duplicate

// Brute Force Approach with TC = O(n^2)
bool containsDuplicate1(int* nums, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

// Optimized Better solution => use Sorting => TC = O(nlogn)
bool containsDuplicate2(int* nums, int n){
    sort(nums, nums+n);

    for(int i=0; i<n; i++){
        if(nums[i] == nums[i-1])
        return true;
    }
    return false;
}

int main() {
    int nums[5] = {20, 40, 70, 90, 70};
    int n = sizeof(nums)/sizeof(int);

    cout << "Array contains Duplicate: " << containsDuplicate2(nums, n) << endl;
    return 0;
}