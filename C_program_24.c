#include<stdio.h>
int main()
{
	int i,count=0,tens;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>=10)
	{
		tens=i%100;
		if(tens==16 || tens==25 || tens==36 || tens==49 || tens==64 || tens==81)
		{
			count=count+1;
		}
		i=i/10;
	}
	printf("Count=%d",count);
}
