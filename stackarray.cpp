#include<iostream>
using namespace std;
const int cap=10;
int St[cap];
int top=-1; //initially stack is empty
void push(int item)
{
    if(top==cap-1)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    top=top+1;
    St[top]=item;
    cout<<"Pushed "<<item<<endl;
}
int pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
        return -1;
    }
    int item=St[top];
    top=top-1;
    cout<<"Popped "<<item<<endl;
    return item;
}
int peek()
{
    if(top==-1)
        return -1;
    else
        return St[top];
}
bool isEmpty()
{
    if(top==-1)
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
    pop();
    pop();
    cout<<peek()<<endl;
    cout<<isEmpty();
}