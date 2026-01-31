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



// Kth ancestor of a node:
int KthAncestor(Node* root, int node, int K) {
    if(root == NULL) return -1;

    if(root->data == node) return 0;

    int leftDist = KthAncestor(root->left, node, K);
    int rightDist = KthAncestor(root->right, node, K);

    if(leftDist == -1 && rightDist == -1) return -1;

    int validVal = leftDist == -1 ? rightDist : leftDist;
    if(validVal + 1 == K) {
        cout << "Kth Ancestor = " << root->data << endl;
    }

    return validVal + 1;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    int n1 = 4, n2 = 6; //min dist = 4
    KthAncestor(root, 4, 1);
    
    return 0;
}