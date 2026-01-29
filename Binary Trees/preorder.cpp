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
// TC = O(n) => traversal of preorder array once
Node* buildTree(vector<int> nodes) { 
    idx++;

    if(nodes[idx] == -1) { //base case
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes); //for building left subtree
    currNode->right = buildTree(nodes); //for building right subtree

    return currNode; //root node of the tree at each level
}



// Preorder Traversal:-
void preorder(Node* root) {
    // Base case
    if(root == NULL) {
        return;
    }

    // main work
    cout << root->data << " ";
    // recursive calls 
    preorder(root->left); //for left subtree
    preorder(root->right); //for right subtree
}



int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    // cout << "root = " << root->data;

    preorder(root);

    return 0;
}