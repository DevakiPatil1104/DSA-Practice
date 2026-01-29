#include<bits/stdc++.h>
using namespace std;

// LC 11. Container With Most Water

int maxArea(int *heights, int n){
    int left = 0, right = n-1;
    int width = 0, maxArea = 0;

    while(left < right){
        width = right - left;
        int currHeight = min(heights[left], heights[right]);

        int currArea = currHeight * width;
        maxArea = max(maxArea, currArea);

        if(heights[left] < heights[right]){
            left++;
        } else right--;
    }
    return maxArea;
}

int main() {
    int heights[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(heights)/sizeof(int);

    int result = maxArea(heights, n);
    cout << "max area of container = " << result << endl;
    return 0;
}