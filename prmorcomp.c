//WAP to check whether the entered number is prime or composite
#include <stdio.h>
int main()
{
int n, i, status = 0;
printf("Enter a positive integer: ");
scanf("%d",&n);
for(i=2; i<=n/2; i++)
{
// condition for nonprime number
if(n%i==0)
{
status=1;
break;
}
}
if (status==0)
printf("%d is a prime number.",n);
else
printf("%d is not a prime number(composite).",n);
return 0;
}