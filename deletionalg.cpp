#include<iostream>
using namespace std;
int deletion(int a[],int n, int k){
    int item=a[k];
    for(int i=k;i<=n-2;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,k,item;
    cout<<"Enter n:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter index to delete:";
    cin>>k;
    deletion(a,n,k);
    return 0;
}