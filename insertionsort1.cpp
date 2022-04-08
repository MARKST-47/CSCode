#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int k=1;k<n;k++)
    {
        int temp=a[k];
        int ptr=k-1;
        while(temp<a[ptr]&&ptr>=0)
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n=8;
    int a[n]={15,7,6,4,17,13,10,2};
    insertionsort(a,n);
}