#include<stdio.h>
int main()
{
	int i,sum=0,ones;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>0)
	{
		ones=i%10;
		sum=sum+ones;
		i=i/10;
	}
	printf("sum=%d",sum);
}
