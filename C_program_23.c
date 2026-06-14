#include<stdio.h>
int main()
{
	int i,last2,count=0;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>=10)
	{
		last2=i%100;
		if(last2%2!=0)
		{
			count=count+1;
		}
		i=i/10;
	}
	printf("Count = %d",count);
}
