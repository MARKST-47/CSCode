//WAP to count multiples of 5 from n to m.[make sure n<m]
#include<stdio.h>
int multiplesof5(int x,int y)
{
    int c=0;
    do
    {
        if(x%5==0 && x<y)
        {
            x=x+5;
            c++;
        }
        else
        {
            x++;
            if(x%5==0)
            c++;
        }
    }
    while(x<y);
    return c;
}
int main()
{
int n,m;
printf("Enter 1st number:");
scanf("%d",&n);
printf("\nEnter 2nd number:");
scanf("%d",&m);
printf("\nMultiples of 5 between 1st and 2nd number is:%d",multiplesof5(n,m));
return 0;
}
