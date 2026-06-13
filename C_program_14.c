#include<stdio.h>

int main()
{
    int num, first, last, middle, temp, digits = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while(temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    middle = (num % digits) / 10;

    result = last * digits + middle * 10 + first;

    printf("Result = %d", result);

    return 0;
}
