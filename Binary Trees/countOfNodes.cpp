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


// Count nodes of a BT:- Recursive approach
//TC = O(n)
int countNodes(Node* root) {
    // base case
    if(root == NULL) {
        return 0;
    }

    // recursive calls
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    // work
    return (leftCount + rightCount + 1);
}


int main() {
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // Node* root = buildTree(nodes);
    vector<int> nodes2 = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    Node* root2 = buildTree(nodes2);

    // cout << "height of tree = " << height(root) << endl;
    cout << "height of tree = " << countNodes(root2) << endl;

    return 0;
}