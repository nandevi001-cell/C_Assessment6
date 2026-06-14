#include<stdio.h>

int main()
{
    int a, b, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    i = 1;

    while(i <= a && i <= b)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }

        i = i + 1;
    }

    printf("HCF = %d", hcf);
}
