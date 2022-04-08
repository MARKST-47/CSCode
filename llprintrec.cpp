#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
node* Insert(node* head, int data)
{
    node* temp= new node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL) head=temp;
    else{
        node* temp1=head;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
    }
    return head;
}
void Print(node* p){
    if(p==NULL) return;
    cout<<p->data<<" ";
    Print(p->next);//if above cout statement it will print ll in reverse order.
}
int main()
{
    head=NULL;
    head=Insert(head,2);
    head=Insert(head,4);
    head=Insert(head,5);
    head=Insert(head,6);
    Print(head);
}