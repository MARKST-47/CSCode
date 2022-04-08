#include<stdio.h>
int multtable(int y,int x)
{
    if(x<=10)
    {
        printf("%dX%d=%d\n",x,y,x*y);
        multtable(y,x+1);
    }
}
int main()
{
    int num,n=1;
    printf("Enter a number:");
    scanf("%d",&num);
    multtable(num,n);
    return 0;
}
