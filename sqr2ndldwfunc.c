#include<stdio.h>
int squaredigit(int x)
{
     int n,n1,n2,c=1;
    printf("\nEnter a value:");
    scanf("%d",&n);
    do
    {
        n1=n/10;
        n2=n1%10;
        c++;
    }while (c<=n2);
    return n2*n2;
}
int main()
{
    int s;
    printf("square of the second last number is=%d\n",squaredigit(s));
    return 0;
}
