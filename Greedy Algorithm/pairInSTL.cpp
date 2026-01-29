#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second; //ascending
    // return p1.second > p2.second; //descending
}

int main() {
    vector<int> start = {0, 1, 3};
    vector<int> end = {9, 2, 4};

    vector<pair<int, int>> activities(3, make_pair(0, 0));
    activities[0] = make_pair(0, 9);
    activities[1] = make_pair(1, 2);
    activities[2] = make_pair(3, 4);

    for(int i=0; i<activities.size(); i++) {
        cout << "A" << i << ": " << activities[i].first << ", " << activities[i].second << endl;
    }

    sort(activities.begin(), activities.end(), compare);
    
    cout << "------------sorted------------" << endl;
    for(int i=0; i<activities.size(); i++) {
        cout << "A" << i << ": " << activities[i].first << ", " << activities[i].second << endl;
    }

    return 0;
}