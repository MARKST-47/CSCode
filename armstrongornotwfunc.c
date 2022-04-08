#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
    int n;
    printf("\nEnter a value:");
    scanf("%d",&n);
    armstrong(n);
}
int armstrong(int x)
{
    int a,j,t,count=0,r;
    double b=0.0;
    t=x;
    j=x;
    while (j!=0)
    {
        count++;
        j=j/10;
    }
    t=x;
    while (x!=0)
    {
        a=x%10;
        b=b+pow(a,count);
        x=x/10;
    }
    if((int)b==t)
        printf("it is an armstrong\n");
    else
        printf("it is not an armstrong\n");
    return 0;
}
