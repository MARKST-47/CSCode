#include<iostream>
using namespace std;
int a[6] = {1,3,5,7,9,11};
int n=6;
int sequentialsearch(int a[],int n,int item)
{
    int i=0;
    int loc=-1;
    while(i<n && a[i]!=item)//first occurence
    {
        i=i+1;
    }
        if(a[i]==item)
        {
            loc=i;
            return loc;
        }
        else{
            return loc;
        }
}
int main()
{
    int m;
    m=sequentialsearch(a,n,1);
    if(m!=-1){
        cout<<"Element found at "<<m;
    }
    else{
        cout<<"Element not found.";
    }
    return 0;
}