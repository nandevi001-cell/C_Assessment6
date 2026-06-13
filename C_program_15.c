#include<stdio.h>

int main()
{
    int num, first, temp, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    if(first % 2 != 0)
    {
        num = num - power;
    }

    printf("%d", num);

    return 0;
}
