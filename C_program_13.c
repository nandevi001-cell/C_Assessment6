#include<stdio.h>
int main()
{
	int i,reverse=0,digit;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>0)
	{
		digit=i%10;
		reverse=reverse*10+digit;
		i=i/10;
	}
	printf("reverse=%d",reverse);
}
