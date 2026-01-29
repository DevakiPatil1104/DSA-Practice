#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second; //descending on basis of 2nd val in pair i.e profit
}

int jobScheduling(vector<pair<int, int>> jobs) { //TC = O(nlogn)
    int n = jobs.size();

    // sort jobs on basis of its profit
    sort(jobs.begin(), jobs.end(), compare);

    // select 0th job
    int totalProfit = jobs[0].second;
    int safeDeadline = 2;

    for(int i=1; i<n; i++) {
        if(jobs[i].first >= safeDeadline) {
            safeDeadline++;
            totalProfit += jobs[i].second;
        }
    }

    cout << "maxProfit = " << totalProfit << endl;
    return totalProfit;
}

int main() {
    int n = 4;
    vector<pair<int, int>> jobs (n, make_pair(0, 0));
    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    jobScheduling(jobs);
    return 0;
}