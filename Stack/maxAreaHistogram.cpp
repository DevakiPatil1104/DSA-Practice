#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxAreaHistogram(vector<int> height) {
    int vecSize = height.size();
    vector<int> nsl(vecSize);
    vector<int> nsr(vecSize);
    stack<int> s;

    // next smaller left
    nsl[0] = -1; //init 1st value as -1
    s.push(0); // put 1st idx in stack

    for(int i=1; i<height.size(); i++) {
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }
        s.push(i);
    }

    // next smaller right
    int n = height.size();
    nsr[n-1] = n; //init last value as n not -1
    s.push(n-1); //push last idx in stack

    for(int i=n-2; i>=0; i--) { //backwards loop from 2nd last idx till idx 0
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()) {
            nsr[i] = n;
        } else {
            nsr[i] = s.top();
        }
        s.push(i);
    }

    // calculating maxArea
    int maxArea = 0;
    for(int i=0; i<height.size(); i++) {
        int ht = height[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = ht * width;

        maxArea = max(area, maxArea);
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "max area of histogram = " << maxAreaHistogram(heights) << endl;
    return 0;
}