#include<iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* top;
void push(int item)
{
    node* t=new node;
    if(t==NULL)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    t->data=item;
    t->link=top;
    top=t;
    cout<<"Pushed "<<item<<endl;
}
int pop()
{
    if(top==NULL)
    {
        cout<<"Underflow"<<endl;
        return -1;
    }
    node* temp=top;
    int item=temp->data;
    top=top->link;
    delete temp;
    return item;
}
int peek()
{
    if(top==NULL)
        return -1;
    else
        return top->data;
}
bool isEmpty()
{
    if(top==NULL)
        return true;
    else
        return false;
}
int main()
{
    push(12);
    push(22);
    push(16);
    push(18);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<peek()<<endl;
    cout<<isEmpty();
}