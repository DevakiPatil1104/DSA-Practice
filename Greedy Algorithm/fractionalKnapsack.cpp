#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first; //descending based of ratio
}

// TC = O(n + nlogn + n) ~ O(nlogn)
int fractionalKnapsack(vector<int> val, vector<int> wt, int W) {
    int n = val.size();
    // pair(ratio, index) => (double, int)
    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));

    // calculate ratio
    for(int i=0; i<n; i++) {
        double r = val[i] / (double)wt[i];
        ratio[i] = make_pair(r, i);
    }

    // sort ratio => descending
    sort(ratio.begin(), ratio.end(), compare);  //O(nlogn)

    int ans = 0;

    for(int i=0; i<ratio.size(); i++) {
        int idx = ratio[i].second;
        if(wt[idx] <= W) { //can fit in knapsack capacity
            ans += val[idx];
            W -= wt[idx];
        } else { //last item in knapsack
            ans += (ratio[i].first * W);
            W = 0;
            break;
        }
    }

    cout << "max value = " << ans << endl;
    return ans;
}

int main() {
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;

    fractionalKnapsack(value, weight, W);
    return 0;
}