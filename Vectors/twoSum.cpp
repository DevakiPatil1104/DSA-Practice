#include<iostream>
#include<vector>
using namespace std;

// LC 1. Two Sum
// Brute Force approach => TC = O(n^2)

vector<int> twoSum(vector<int>& vec, int target){ //pass by reference always

    for(int i=0; i<vec.size()-1; i++){
        for(int j=i+1; j<vec.size(); j++){
            if(vec[i] + vec[j] == target){
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(vec, target);
    if (!result.empty()) {
    cout << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}