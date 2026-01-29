#include<bits/stdc++.h>
using namespace std;

// LC 152. Maximum Product Subarray 

// TC => O(n^2)

int maxProduct(int* nums, int n){
    int maxProduct = nums[0];

    for(int st=0; st<n; st++){
        int currProduct = 0;
        for(int end=st; end<n; end++){
            currProduct = currProduct * nums[end];
            maxProduct = max(maxProduct, currProduct);
        }
    }
    return maxProduct;
}

int main() {
    int nums[4] = {2, 3, -2, 4};
    int n = sizeof(nums)/sizeof(int);
    
    int result = maxProduct(nums, n);
    cout << "MaxProduct = " << result << endl;
    return 0;
}