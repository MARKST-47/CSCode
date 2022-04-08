#include<iostream>
using namespace std;
struct node
{
int data;
struct node * link;
};

struct node * start;

void insertBegin(int item)
{
    node *t= new node;
    t->data= item;
    if(start==NULL)
    {
        start= t; t->link= t;
    }
    else
    {
        node*p= start;
        while(p->link!=start) { p=p->link; }
        p->link=t;
        t->link= start;
        start= t;
    }
    cout<<"inserted node "<<item<<endl;
}
void insertlast(int item)
{
    node *t= new node;
    t->data= item;
    if(start==NULL)
    {
        start= t; t->link= t;
    }
    else
    {
        node*p= start;
        while(p->link!=start) { p=p->link; }
        t->link=p->link;
        p->link=t;
    }
    cout<<"inserted node "<<item<<endl;
}
void display()
{
    if(start==NULL)
    {
        cout<<"Empty Linked list";
    }
    else{
        node* p=start;
        do{
            cout<<p->data<<" ";
            p=p->link;
        }
        while(p!=start);
    }
}
void deleteAtHead()
{
    if(start==NULL)
    {

    }
    else if(start->link==start)//1 node only
    {
        node*p=start;
        start=NULL;
        delete p;
    }
    else
    {
        node* todelete=start;
        node* temp=start;
        while(temp->link!=start)
        {
            temp=temp->link;
        }
        temp->link=start->link;
        start=start->link;
        delete todelete;
    }
}
void deletelast()
{
    if(start==NULL)
    {

    }
    else if(start->link==start)
    {
        node* p=start;
        start=NULL;
        delete p;
    }
    else{
        node* p=start;
        node* temp=p;
        while(p->link!=start)
        {
            temp=p;
            p=p->link;
        }
        temp->link=start;
        delete p;
    }
}
int main()
{
    insertBegin(12);
    insertBegin(10);
    insertlast(16);
    insertlast(14);
    deleteAtHead();
    deletelast();
    display();
}