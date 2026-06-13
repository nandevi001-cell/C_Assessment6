#include<stdio.h>

int main()
{
    int num, i, prime = 1;
    int sum = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        prime = 0;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            prime = 0;
        }
    }

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if(prime == 1 && sum == 14)
        printf("Prime & sum of digits is 14");

    else if(prime == 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");

    else if(prime == 1 && sum != 14)
        printf("Prime & sum of digits is not 14");

    else
        printf("Not Prime & sum of digits is not 14");

}
