#include <iostream>
using namespace std;
int a[5]={1,3,5,7,9};
int bs(int key)
{
    int beg=0,last=4,loc=-1;
    while(beg<=last)
    {
       int mid=(beg+last)/2;
       if(a[mid]==key)
       {
           loc=mid;
           break;
       }
       else if(a[mid]<key)
       {
           beg=mid+1;
       }
       else if(a[mid]>key)
       {
           last=mid-1;
       }
    }
    if(loc!=-1)
    {
       return loc;
    }
    else
    {
       return loc;
    }
}
int main()
{
    cout<<bs(5)<<endl;
    cout<<bs(9)<<endl;
    cout<<bs(11)<<endl;
    return 0;
}