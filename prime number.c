#include <stdio.h>
int primenumber(int, int);
int main()
{
    int number, check;
    printf("Enter a number to check whether it is prime or not: ");
    scanf("%d", &number);
    check = primenumber(number, number / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }
    return 0;
} 
int primenumber(int number, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (number % i == 0)
       {
         return 0;
       }
       else
       {
         return primenumber(number, i - 1);
       }       
    }
}
