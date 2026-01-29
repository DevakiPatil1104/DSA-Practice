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
    if(nodes[idx] == -1) { //base case
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes); 
    currNode->right = buildTree(nodes); 
    return currNode; 
}


// Height of a tree (in terms of nodes):- Recursive approach
//TC = O(n)
int height(Node* root2) {
    int currHt = 0;

    // base case
    if(root2 == NULL) {
        return 0;
    }

    // recursive calls
    int leftHt = height(root2->left);
    int rightHt = height(root2->right);

    // work
    currHt = max(leftHt, rightHt) + 1;

    return currHt;
}


int main() {
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // Node* root = buildTree(nodes);
    vector<int> nodes2 = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    Node* root2 = buildTree(nodes2);

    // cout << "height of tree = " << height(root) << endl;
    cout << "height of tree = " << height(root2) << endl;

    return 0;
}