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

// Inorder Traversal:-
void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left); 
    cout << root->data << " ";
    inorder(root->right); 
}


// Transform to sum tree: O(n)
int transform(Node* root) {
    if(root == NULL) return 0;
    
    int leftSum = transform(root->left);
    int rightSum = transform(root->right);

    int oldVal = root->data;

    // Update current node to sum of left + right subtree
    root->data = leftSum + rightSum; 
    
    // Return total sum of subtree including original value
    return oldVal + root->data;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    transform(root);
    inorder(root);
    
    return 0;
}