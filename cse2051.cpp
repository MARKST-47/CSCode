#include<iostream>
using namespace std;
int count=0;
int recursive (int n)
{
    if (n == 1)
    {
        count++;
        return (1); 
    }
    else
    {
        count++;
        return (recursive (n-1) + recursive (n-1));
    }
}
int main()
{
    recursive(5);
    cout<<count;
}