#include <iostream>
#include <vector>
#include <map>
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
    if(nodes[idx] == -1) return NULL;
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes); 
    currNode->right = buildTree(nodes); 
    return currNode; 
}

// Bottom View of a Tree
void bottomView(Node* root) {
    queue<pair<Node*, int>> q; //(node, HD)
    map<int, int> m; //(HD, node->data)

    q.push(make_pair(root, 0)); //first root pushed in q

    while(!q.empty()) {
        pair<Node*, int> curr = q.front();
        q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;
 
        m[currHD] = currNode->data; // add val 1st time in map and overwrite next time

        if(currNode->left != NULL) {
            pair<Node*, int> left = make_pair(currNode->left, currHD-1);
            q.push(left);
        }

        if(currNode->right != NULL) {
            pair<Node*, int> right = make_pair(currNode->right, currHD+1);
            q.push(right);
        }
    }

    for(auto it: m) {
        cout << it.second << " ";
    }
    cout << endl;
}


int main() {
    vector<int> nodes = {1, 2, 4, 6, -1, -1, 7, -1, 9, -1, -1, 5, -1, -1, 3, -1, 8, -1, -1};
    Node* root = buildTree(nodes);

    bottomView(root);
    return 0;
}