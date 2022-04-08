#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;//global variable
void Insert(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Print()
{
    Node* temp=head;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    head=NULL; //Empty list
    cout<<"How many numbers?\n";
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter no: ";
        cin>>x;
        Insert(x);
        Print();
    }
}