#include<iostream>
using namespace std;
struct Node
{
    int info;
    struct Node *left,*right;
};
struct Node *Root,*par;
struct Node * search(int item)
{
    par=NULL; struct Node *ptr,*save;
    ptr=Root; save=NULL;
    while(ptr!=NULL)
    {
        if(item==ptr->info)
        {
            par=save; 
            return ptr;
        }
        else if(item<ptr->info)
        {
            save=ptr; 
            ptr=ptr->left;
        }
        else
        {
            save=ptr; 
            ptr=ptr->right;
        }
    }
    par= save;return NULL;
}
void insert(int item)
{
    struct Node *loc=search(item);
    if(loc!=NULL)
    {
        cout<<"already exists"; 
        return;
    }
    else
    {
        struct Node *temp=new Node;
        temp->info=item; 
        temp->left=temp->right=NULL;
        if(par==NULL)
        {
            Root=temp;
        }
        else if(item<par->info)
        {
            par->left=temp;
        }
        else
        {
            par->right=temp;
        }
    }
}
void preorder(struct Node *r)
{
if(r!=NULL)
{
cout<<r->info<<"\n";
preorder(r->left);
preorder(r->right);
}
}
void inorder(struct Node *r)
{
if(r!=NULL)
{

inorder(r->left);
cout<<r->info<<"\n";
inorder(r->right);
}
}
void postorder(struct Node *r)
{
if(r!=NULL)
{
postorder(r->left);
postorder(r->right);
cout<<r->info<<"\n";
}
}
/*int countNodes(struct Node *r)
{

}
int getHeight(struct Node*r)
{

}
int findInternalNodes(struct Node *r)
{

}
*/
void delCaseA(struct Node *loc,struct Node*p)
{
    struct Node *child;
    if(loc->left==NULL && loc->right==NULL)
    {
        child =NULL;
    }
    else if(loc->left!=NULL)
    {
        child=loc->left;
    }
    else
    {
        child= loc->right;
    }
    if(p==NULL)
    {
        Root=child;
    }
    else if(loc==p->left)
    {
        p->left=child;
    }
    else
    {
        p->right=child;
    }
}
void delCaseB(struct Node *loc,struct Node*p)
{
    struct Node*ptr,*save,*suc,*parsuc;
    ptr=loc->right;
    while(ptr->left!=NULL)
    {
        save=ptr;
        ptr=ptr->left;
    }
    suc=ptr; parsuc=save;
    delCaseA(suc,parsuc);
    if(p!=NULL)
    {
        if(loc==p->left)
        {
            p->left=suc;
        }
        else
        {
            p->right=suc;
        }
    }
    else
    {
        Root=suc;
    }
    suc->left=loc->left;
    suc->right=loc->right;
}
void delNode(int item)
{
    struct Node *loc=search(item);
    if(loc==NULL)
    {
        cout<<"node doesnot exist"<<"\n";return;
    }
    if(loc->left!=NULL && loc->right!=NULL)
    {
        delCaseB(loc,par);
    }
    else
    {
        delCaseA(loc,par);
    }
}
int main()
{
    insert(10);
    insert(34);insert(33);insert(3);
    insert(21);insert(22);insert(11);insert(40);insert(36);insert(35);insert(38);

    preorder(Root); //inorder(Root); postorder(Root);
    delNode(34); cout<<"\n";
    preorder(Root); // inorder(Root); postorder(Root);
}