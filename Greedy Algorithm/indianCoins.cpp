#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(vector<int> coins, int V) {
    int ans = 0;
    int temp = V;

    // travel coins vec backwards to start with bigger deno val
    for(int i = coins.size()-1; i >= 0 && temp > 0; i--) {
        
        if(coins[i] <= temp) {
            ans += temp / coins[i];
            temp = temp % coins[i];
        }
    }
    cout << "min no. of coins required for val " << V << " = " << ans << endl;
    return ans;
}

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int Val = 590;

    minCoins(coins, Val);
    
    return 0;
}