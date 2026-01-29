#include <iostream>
#include <vector>
using namespace std;

int maxActivitySelection(vector<int> start, vector<int> end) {
    // sort activities on basis on endTime if not given

    // 1st select activity A0
    cout << "selecting A0\n" ;
    int count = 1;
    int currEndTime = end[0];

    // check for rest of activities one by one
    for(int i=1; i<start.size(); i++) {
        if(start[i] >= currEndTime) {
            cout << "selecting A" << i << endl ;
            count++;
            currEndTime = end[i];
        }
    }

    return count;
}

int main() {
    // vector<int> start = {1,3,0,5,8,5};
    // vector<int> end = {2,4,6,7,9,9};

    vector<int> start = {0, 1, 3};
    vector<int> end = {9, 2, 4};

    vector<pair<int, int>> activities(3, make_pair(0, 0));

    cout << maxActivitySelection(start, end) << endl;

    return 0;
}