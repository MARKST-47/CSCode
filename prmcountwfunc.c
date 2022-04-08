//WAP to display and count all prime numbers from 100-1000
#include<stdio.h>
void primecount();
int main()
{
    primecount();
    return 0;
}
void primecount()
{
     int i,j,status=0,count=0;
     for(i=100;i<=1000;i++)
     {
         for(j=2;j<=i/2;j++)
         {
             if(i%j==0)
             {
                 status=1;
                 break;
             }
         }
     if(status==0)
     {
         printf("\n%d",i);
         count++;
     }
     else
     {
        status=0;
     }
     }
     printf("\n Count of prime number is:%d",count);
}