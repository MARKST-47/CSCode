//WAP to check number is palindrome or not, if it is palindrome then check whether the last digit is even or odd,
//if the number is not palindrome then check it is prime or composite.
#include<stdio.h>
void isevenorodd(int);
void isPrime(int);
void isPalindrome(int num)
{
    int rem,rev=0,i;
    for(i=num;i!=0;i=i/10)
    {
        rem=i%10;
        rev=rev*10+rem;
    }
    if (rev==num)
    {
        isevenorodd(num);
    }
    else
    {
        isPrime(num);
    }
}
void isevenorodd(int y)
{
    int last=y%10;
    if(last%2==0)
       printf("\nEven");
    else
        printf("\nOdd");
}
void isPrime(int m)
{
    int z=0,k;
    for(k=2;k<=m/2;k++)
    {
        if(m%k==0)
        {
            z=1;
            break;
        }
    }
    if(z==0)
        printf("\nPrime number");
    else
        printf("\nComposite number");
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    isPalindrome(x);
    return 0;
}