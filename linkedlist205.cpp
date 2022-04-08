#include<iostream>
using namespace std;

void traverse();
struct node
{
    int data;
    node * link;
};

node * start;

void insertBegin(int item)
{
    node *t= new node;
/* allocating memory for 1 new node and t is pointer storing
the address of newly constructed node
*/
    t->data= item;
    if(start==NULL)
    {
        start= t; t->link= NULL;
    }
    else
    {
        t->link= start;
        start= t;
    }

cout<<"inserted node "<<item<<endl;
}
void insertLast(int item)
{
    node* t=new node;
    t->data=item;
    t->link=NULL;
    if(start==NULL)
    {
        start=t;
    }
    else
    {
        node* p=start;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        //p stores adress of current last node
        p->link=t;
    }
    cout<<"Inserted at last "<<item<<endl;
}
void traverse ()
{
    node * p= start;
    cout<<"start --> ";
    while(p!= NULL)
    {
        cout<<p->data<<" ";
        p= p->link ;
    }
    cout<<endl;
}
void searchNode(int item)
{
    node* p=start;
    while(p!=NULL)
    {
        if(item==p->data)
        {
            cout<<"found "<<item<<endl;
            return;
        }
        else
        {
            p=p->link;
        }
    }
    cout<<"Not found "<<item<<endl;
}
void deleteBegin()
{
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    else
    {
        node* p=start;
        start=start->link;//start will store value of second node or NULL 
        delete p;//retrun memory back to system
    }
}
void deleteLast()
{
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    else if(start->link==NULL)
    {
        node* p=start;
        start=NULL;
        delete p;
    }
    else
    {
        node *p, *t;
        p=start;
        while(p->link!=NULL)
        {
            t=p;
            p=p->link;
        }
        t->link=NULL;
        delete p;
    }
}
void deletevalue(int d)
{
    node *p,*t;
    if(start==NULL)
    {
        cout<<"Linked list empty";
    }
    else if(start->data==d)
    {
        start=start->link;
    }
    else
    {
        p=start; t=p;
        while(p!=NULL)
        {
            if(p->data==d)
            {
                t->link=p->link; 
                return;
            }
            else
            {
                t=p;
                p=p->link; 
            }            
        } 
    }
}
int countNodes()
{
    node* t=start;
    int count=0;
    while(t!=NULL)
    {
        t=t->link;
        count++;
    }
    return count; 
}
node* getmaxnode()
{
    node* t=start;
    node* max=start;
    if(start==NULL)
    {
        return NULL;
    }
    else
    {
        while(t!=NULL)
        {
            if(t>max)
            {
                max=t;
            }
            t=t->link;
        }
    }
    return max;
}
void insertbeforenode(int item,int d)
{
    if(start->data==item)
    {
        node* t=new node;
        t->data=d;
        t->link=start;
        start=t;
    }
    else
    {
        node* p, *m=start;
        while(m->data!=item)
        {
            p=m;
            m=m->link;
        }
        node* t=new node;
        t->data=d;
        t->link=p->link;
        p->link=t;
    }
}
void reverse(){
    node* prev=NULL;
    node* current=start;
    node* next;
    while(current!=NULL){
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    start=prev;
}
void printrev(node* s)
{
    if(s==NULL)
        return;
    printrev(s->link);
    cout<<s->data<<" ";
}
int main()
{
    insertBegin(20);
    insertBegin(30);
    insertBegin(40);
    insertLast(15);
    insertLast(70);
    insertbeforenode(20,25);
    traverse();
    searchNode(30);
    searchNode(50);
    cout<<getmaxnode()<<endl;
    deleteBegin();
    deleteLast();
    deletevalue(20);
    traverse();
    cout<<countNodes()<<endl;
    reverse();
    traverse();
    printrev(start);
}