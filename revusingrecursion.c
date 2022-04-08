#include<stdio.h> 
int reverse_num(int num);
int main()
{    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);       
    reverse_num(num);
    return 0; 
}
int reverse_num(int num)
{    
    int rem;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        rem = num % 10; 
        printf("%d", rem);
        num=num/10;
        reverse_num(num); 
    }
}
