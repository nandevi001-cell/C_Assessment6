#include<stdio.h>

int main()
{
    int num, middle, i, prime = 1;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    middle = (num / 10) % 100;

    if(middle <= 1)
        prime = 0;

    for(i = 2; i < middle; i++)
    {
        if(middle % i == 0)
        {
            prime = 0;
        }
    }

    if(prime == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
