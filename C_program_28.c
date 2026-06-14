#include<stdio.h>

int main()
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b)
    {
        i = a;
    }
    else
    {
        i = b;
    }

    while(1)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("LCM = %d", i);
            break;
        }

        i = i + 1;
    }
}
