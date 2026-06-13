#include<stdio.h>

int main()
{
    int num, last2, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last2 = num % 100;

    if(last2 <= 1)
        prime = 0;

    for(i = 2; i < last2; i++)
    {
        if(last2 % i == 0)
        {
            prime = 0;
        }
    }

    if(prime == 1)
        printf("Prime");
    else
        printf("Not Prime");

}
