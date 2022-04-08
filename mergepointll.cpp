#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertattail(node* &head,int val){
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
void intersect(node* &head1, node* &head2, int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int mergepoint(node* &head1, node* &head2)
{
    int l1=length(head1);
    int l2=length(head2);
    int d=l2-l1;
    if(l1>l2){  //swap two linked lists
        node* temp=head1;
        head1=head2;
        head2=temp;
        d=l1-l2;
    }
    //walk through d nodes of longer list,ie;head 2
    for(int i=0;i<d;i++){
        head2=head2->next;
    }
    //Now both head1 & head2 are equidistant from merge point
    while(head1!=NULL && head2!=NULL){
        if(head1==head2)
        {
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insertattail(head1,1);
    insertattail(head1,2);
    insertattail(head1,3);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,6);
    insertattail(head2,9);
    insertattail(head2,10);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<mergepoint(head1,head2)<<endl;
    return 0;
}