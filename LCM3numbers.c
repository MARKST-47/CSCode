/* Program To Calculate LCM */

#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c,l;
 printf("Enter Three Numbers: ");
 scanf("%d %d %d",&a,&b,&c);
 for(l=1;l<=(a*b*c);l++)
 {
  if(l%a==0 && l%b==0 && l%c==0)
  break;
 }
 printf("LCM is %d",l);
 return 0;
}