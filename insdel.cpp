#include<iostream>
using namespace std;
int LA[10] = {1,3,5,7,8};
int N=5;
void printA()
{
    cout<<"The array elements are :\n";
    for(int i = 0; i<N; i++) {
        cout<<"\n "<<LA[i];
    }
    cout<<endl;
}
void insertA(int k, int item)
{
    int j = N-1;
    while( j >= k) {
        LA[j+1] = LA[j];
        j = j - 1;
    }
    LA[k] = item;
    N= N+1;
    printA();
}
int deleteA(int k)
{
    int item= LA[k];
    for(int i= k; i<N-1; i++)
    {
        LA[i]= LA[i+1];
    }
    N= N-1;
    printA();
    return item;
}
int main()
{
    printA();
    insertA(2,20);
    insertA(2, 21);
    insertA(2,30);
    cout<<deleteA(2)<<endl;
    return 0;
}

