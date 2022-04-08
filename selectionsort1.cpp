#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    int min,loc;
    for(int k=0;k<n-1;k++)
    {
        min=a[k];
        loc=k;
        for(int j=k+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        int temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
}
int main()
{
    int n=8;
    int a[n]={15,7,6,4,17,13,10,2};
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}