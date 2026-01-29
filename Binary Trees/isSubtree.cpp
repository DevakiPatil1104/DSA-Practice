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


bool isIdentical(Node* root1, Node* root2) {
    if(root1 == NULL && root2 == NULL) return true;
        
    else if(root1 == NULL || root2 == NULL) return false;

    if(root1->data != root2->data) return false; 

    return isIdentical(root1->left, root2->left)
           && isIdentical(root1->right, root2->right);
}

// Subtree of another tree => 
bool isSubtree(Node* root, Node* subRoot) {
    if(root == NULL && subRoot == NULL) return true;
        
    else if(root == NULL || subRoot == NULL) return false;

    if(root->data == subRoot->data) {
        // call isIdentical for tree and subtree
        if(isIdentical(root, subRoot)) return true;
    }

    int isLeftSubtree = isSubtree(root->left, subRoot); //for left subtree
    if(!isLeftSubtree) {
        return isSubtree(root->right, subRoot); //for right subtree
    }
 
    return true;
}


int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    // vector<int> nodes2 = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    // Node* root2 = buildTree(nodes2);

    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);

    cout << isSubtree(root, subRoot); //o/p = 1

    return 0;
}