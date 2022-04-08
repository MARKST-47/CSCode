#include<iostream>
using namespace std;
int insert(int a[],int n, int k, int item){
    int j=n-1;
    while(j>=k){
        a[j+1]=a[j];
        j=j-1;
    }
    a[k]=item;
    n=n+1;
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
    cout<<"Enter element to insert:";
    cin>>item;
    cout<<"Enter index to insert into:";
    cin>>k;
    insert(a,n,k,item);
    return 0;
}