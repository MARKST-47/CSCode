//Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int perfect(int);
int main()
{
    int p; 
    printf("\n Enter any number:");
    scanf("%d",&p);
    perfect(p);
}
int perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
    {
        printf("\n%d is a Perfect Number",num);
        return num;
    }
    else
    {
        printf("\n%d is not a Perfect Number",num);
        return num ;
    }
}