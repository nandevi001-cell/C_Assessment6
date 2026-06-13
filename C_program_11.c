#include<stdio.h>
int main()
{
	int i,count=0;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>0)
	{
		count=count+1;
		i=i/10;
	}
	printf("Total digits=%d",count);
}
