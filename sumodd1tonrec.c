#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Enter number:");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<n;i++)
   {
     printf("%d ",i);
     sum+=i;
     i++;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
   return 0;
}
