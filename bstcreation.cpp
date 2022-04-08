#include<bits/stdc++.h>
#define SPACE 10
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
};
Node* createnode(int key)
{
    Node *node= new Node();
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void print2D(Node * r, int space) {
    if (r == NULL) // Base case  1
      return;
    space += SPACE; // Increase distance between levels   2
    print2D(r -> right, space); // Process right child first 3 
    cout << endl;
    for (int i = SPACE; i < space; i++) // 5 
      cout << " "; // 5.1  
    cout << r -> key << "\n"; // 6
    print2D(r -> left, space); // Process left child  7
  }
/*          10
        20      30
     40   70  50   60
*/
int main()
{
    Node *root=createnode(10);                  
    root->left=createnode(20);
    root->right=createnode(30);
    root->left->left=createnode(40);
    root->right->left=createnode(50);
    root->right->right=createnode(60);
    root->left->right=createnode(70);
    print2D(root,3);
}