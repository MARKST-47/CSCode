#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter number:";
   cin>>n;
   int a[n];
   cout<<"Enter elements of array:";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int key;
   cout<<"Enter key:";
   cin>>key;
   int beg=0,last=n-1,loc=-1;
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
       cout<<"Element found at position:"<<loc+1;
   }
   else
   {
       cout<<"Element not found.";
   }
   return 0;
}