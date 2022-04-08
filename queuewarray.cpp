#include<iostream>
using namespace std;
const int mcap=10;
int Que[mcap];
int F=-1;
int R=-1;
void insertQ(int item)
{
    if((F==0 && R==mcap-1)|| (F==R+1))
    {
        cout<<"Overflow "<<endl; return;
    }
    if(F==-1)
    {
        F=R=0;
    }
    else if(R==mcap-1)
    {
        R=0;
    }
    else
    {
        R=R+1;
    }
    Que[R]= item;
    cout<<"inserted into Q "<<item<<endl;
}
int deleteQ()
{
    if(F==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    int item=Que[F];
    if(F==R)
    {
        F=R=-1;
    }
    else if(F==mcap-1){
        F=0;
    }
    else{
        F=F+1;
    }
    return item;
}
void traverse()
{
    if(F==R){
        cout<<"Empty";
        return;
    }
    else if(F<=R){
        for(int i=F;i<=R;i++){
            cout<<Que[i]<<" ";
        }
    }
    else{
        for(int i=F;i<mcap;i++){
            cout<<Que[i]<<" ";
        }
        for(int j=0;j<=R;j++){
            cout<<Que[j]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    insertQ(12); insertQ(11);insertQ(14); insertQ(13);
    insertQ(121); insertQ(114);insertQ(124); insertQ(153);
    insertQ(126); insertQ(117);insertQ(148); insertQ(136);
    traverse();
    cout<<"Deleted value is: "<<deleteQ()<<endl;
    cout<<"Deleted value is: "<<deleteQ()<<endl;
    traverse();
}