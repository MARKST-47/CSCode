#include<iostream>
using namespace std;
struct node{
    int info;
    node* link;
};
node *front, *rear;
void insertQ(int item)
{
    node *t=new node;
    t->info=item;
    t->link=NULL;
    if(front==NULL)
    {
        front=rear=t;
    }
    else{
        rear->link=t;
        rear=t;
    }
    cout<<"Inserted into Q:"<<item<<endl;
}
int deleteQ()
{
    if(front==NULL)
    {
        cout<<"Underflow"<<endl;
        return -1;
    }
    node* t=front;
    int item=t->info;
    front=front->link;
    delete t;
    return item;
}
void traverse()
{
    node * p= front;
    while(p!= NULL)
    {
        cout<<p->info<<" ";
        p= p->link ;
    }
    cout<<endl;
}
int main(){
    insertQ(10);
    insertQ(12);
    insertQ(14);
    insertQ(16);
    insertQ(18);
    insertQ(20);
    traverse();
    cout<<deleteQ()<<endl;
    cout<<deleteQ()<<endl;
    traverse();
}