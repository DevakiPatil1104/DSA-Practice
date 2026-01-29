#include<bits/stdc++.h>
using namespace std;

// LC 33. Search in Rotated Sorted Array

// TC => O(logn)

int search(int* nums, int n, int key){
    int left = 0, right = n-1;

    while(left <= right){
        int mid = left + (right-left)/2;

        // Key found at mid
        if(nums[mid] == key)
          return mid;

        // If left half is sorted
        if(nums[left] <= nums[mid]){
            // check if key is in left sorted
            if(nums[left] <= key && key < nums[mid]){
                right = mid - 1;
            } else
            left = mid + 1;
        }

        // If right half is sorted
        if(nums[mid] <= nums[right]){
            // check if key is in right sorted part
            if(nums[mid] < key && key <= nums[right]){
                left = mid + 1;
            } else
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums)/sizeof(int);
    int key = 7;

    int result = search(nums, n, key);

    if(result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;
    return 0;
}