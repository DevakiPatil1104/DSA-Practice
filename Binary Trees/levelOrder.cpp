#include <iostream>
#include <vector>
#include <queue>
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
    currNode->left = buildTree(nodes); //for building left subtree
    currNode->right = buildTree(nodes); //for building right subtree

    return currNode; //root node of the tree at each level
}


// Level Order Traversal:-
void levelOrder(Node* root) {
    if(root == NULL) { //check if tree is empty
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left != NULL) {
            q.push(curr->left);
        }

        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout << endl;
}

// Level Order Traversal with variation:- each level all nodes on newline => o/p = 1 /n 2 3 /n 4 5 6
void levelOrderNextLine(Node* root) {
    if(root == NULL) { //check if tree is empty
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL); //null == new line

    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if(curr == NULL) {
            cout << endl; //add new line when NULL->found
            if(q.empty()) { //when all levels completed noneed of new line
                break;
            }

            q.push(NULL); //to track next line after each level
        } else {
            cout << curr->data << " ";

            if(curr->left != NULL) {
                q.push(curr->left);
            }

            if(curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
}


int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    levelOrderNextLine(root);

    return 0;
}