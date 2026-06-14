#include<stdio.h>
int main()
{
	int i,count=0,ones;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>0)
	{
		ones=i%10;
		if(ones%2!=0)
		{
			count=count+1;
		}
		i=i/10;
	}
	printf("Total number digits which are odd in the number:%d",count);
	
}
