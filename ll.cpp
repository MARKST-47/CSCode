#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertatend(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){ //Till end of ll
        temp=temp->next;
    }
    temp->next=n;//To add new element
}
void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* &head,int key)
{
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){
    node* prev=NULL;
    node* current=head;
    node* nextp;
    while(current!=NULL){
        nextp=current->next;
        current->next=prev;
        prev=current;
        current=nextp;
    }
    head=prev;//Or directly return prev
    return head;
}
node* reverseRecursive(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
node* reversek(node* &head, int k){
    node* prev=NULL;
    node* curr=head;
    node* nextp;
    int count=0;
    while(curr!=NULL && count<k){
        nextp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextp;
        count++;
    } 
    if(nextp!=NULL)
        head->next=reversek(nextp,k);
    head=prev;
    return head;
}
int main()
{
    node* head=NULL;
    insertatend(head,5);
    insertatend(head,4);
    insertatend(head,3);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    display(head);
    cout<<search(head,4)<<endl;
    cout<<search(head,6)<<endl;
    head=reverse(head);
    display(head);
    head=reverseRecursive(head);
    display(head);
    head=reversek(head,2);
    display(head);
    return 0;
}