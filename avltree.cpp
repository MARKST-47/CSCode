  #include<iostream>
using namespace std;
// A structure representing a node of a tree.
struct node
{
	int data;
	node *left;
	node *right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
int height(node* root)
{
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isBalancedn(node* root)//O(n^2) complexity
{
    if(root==NULL){
        return true;
    }
    if(isBalancedn(root->left)==false){
        return false;
    }
    if(isBalancedn(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
bool isBalanced(node* root,int* height)//O(n) complexity
{
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isBalanced(root->left,&lh)==false){
        return false;
    }
    if(isBalanced(root->right,&rh)==false){
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
    root1->left->right=new node(5);
    root1->right->left=new node(6);
    root1->right->right=new node(7);
    node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);
    int height=0;
    if(isBalanced(root2,&height)==true){            //root2->unbalanced
        cout<<"Balanced tree"<<endl;
    }
    else{
        cout<<"Unbalanced tree"<<endl;
    }
    return 0;
}