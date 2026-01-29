#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
// Build tree from Preorder:-
Node* buildTree(vector<int> nodes) { 
    idx++;
    if(nodes[idx] == -1) return NULL; 
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes); 
    currNode->right = buildTree(nodes); 
    return currNode; 
}
// Height of a tree (in terms of nodes):- Recursive approach
//TC = O(n)
int height(Node* root2) {
    int currHt = 0;
    if(root2 == NULL) return 0;    
    int leftHt = height(root2->left);
    int rightHt = height(root2->right);
    currHt = max(leftHt, rightHt) + 1;
    return currHt;
}



// Diameter of a tree (in terms of nodes):- Recursive approach_1 
//TC = O(n^2)
int diam1(Node* root) {
    // base case
    if(root == NULL) {
        return 0;
    }

    int currDiam = height(root->left) + height(root->right) + 1; //diam passing through root
    int leftDiam = diam1(root->left);
    int rightDiam = diam1(root->right);

    return max(currDiam, max(leftDiam, rightDiam));

}

// Diameter of a tree (in terms of nodes):- Recursive approach_2 
//TC = O(n)
pair<int, int> diam2(Node* root) {
    if(root == NULL) {
        return make_pair(0, 0);
    }

    //(first=>diameter, second=>height)
    pair<int, int> leftInfo = diam2(root->left); //(LD, LH)
    pair<int, int> rightInfo = diam2(root->right); //(RD, RH)

    int currHt = max(leftInfo.second, rightInfo.second) + 1; //final height
    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));

    return make_pair(finalDiam, currHt);
}


int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    // vector<int> nodes2 = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    // Node* root2 = buildTree(nodes2);

    cout << "(diameter, height) = " << diam2(root).first << ", " << diam2(root).second << endl;
    return 0;
}