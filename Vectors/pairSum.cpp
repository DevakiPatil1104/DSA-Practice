#include<iostream>
#include<vector>
using namespace std;

// LC 167. Two Sum II - Input Array Is Sorted
// Two Pointer approach => TC = O(n)

vector<int> pairSum(vector<int> vec, int target){
    int left = 0, right = vec.size()-1;
    int sum = 0;
    vector<int> ans;

    while(left < right){
        sum = vec[left] + vec[right];

        if(sum == target){
            // ans.push_back(left);
            // ans.push_back(right);
            // return ans;
            return {left+1, right+1}; // 1-based indexing 
        } else if(sum < target){
            left++;
        } else {
            right--;
        }
    }

    return ans;
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = pairSum(vec, target);
    if (!result.empty()) {
    cout << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}