/* Program To Calculate LCM */
#include<stdio.h>
int main()
{
 int a,b,l;
 printf("Enter Two Numbers: ");
 scanf("%d%d",&a,&b);
 for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b))
 {
  if(l%a==0 && l%b==0)
  break;
 }
 printf("LCM is %d",l);
 return 0;
}