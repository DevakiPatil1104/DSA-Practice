#include<bits/stdc++.h>
using namespace std;

// LC 121. Best Time to Buy and Sell Stock

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    cout << bestBuy[0] << ", ";

    // TC = O(n)
    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
        cout << bestBuy[i] << ", ";
    }
    cout << endl;

    int maxProfit = 0;
    // TC = O(n)
    for(int i=0; i<n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "maxProfit = " << maxProfit << endl;
}

// Final TC = O(n+n) = O(2n) = O(n)

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(int);

    maxProfit(prices, n);
    return 0;
}