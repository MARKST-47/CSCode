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
// A function creating binary search tree.
node* insertBST(node* root, int val)
{
	if(root==NULL){
		return new node(val);
	}
	if(val<root->data){
		root->left=insertBST(root->left, val);
	}
	else{
		//val>root->data
		root->right=insertBST(root->right, val);
	}
	return root;
}
node* searchinBST(node* root, int key)
{
	if(root==NULL){
		return NULL;
	}
	if(root->data==key){
		return root;
	}
	if(root->data>key){
		return searchinBST(root->left, key);
	}
	return searchinBST(root->right, key);
}
node* inorderSucc(node* root)
{
	node* curr=root;
	while(curr && curr->left!=NULL){
		curr=curr->left;
	}
	return curr;
}
node* deleteinBST(node* root,int key)
{
	if(key<root->data){
		root->left=deleteinBST(root->left, key);
	}
	else if(key>root->data){
		root->right=deleteinBST(root->right, key);
	}
	else{
		if(root->left==NULL){
			node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			node* temp=root->left;
			free(root);
			return temp;
		}
		node* temp=inorderSucc(root->right);
		root->data=temp->data;
		root->right=deleteinBST(root->right, temp->data);
	}
	return root;
}
void inorder(node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	node *root=NULL;
	root=insertBST(root,5);
	insertBST(root,1);
	insertBST(root,3);
	insertBST(root,4);
	insertBST(root,2);
	insertBST(root,7);
	//print inorder
	inorder(root);
	cout<<endl;
	if(searchinBST(root, 6)==NULL){
		cout<<"key doesn't exist"<<endl;
	}
	else{
		cout<<"key exists"<<endl;
	}
	root=deleteinBST(root, 3);
	inorder(root);
	cout<<endl;
	return 0;
}