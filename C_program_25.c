#include<stdio.h>
int main()
{
	int i,count=0,ones;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>0)
	{
		ones=i%10;
		if(ones==2 || ones==3 || ones==5 || ones==7 )
		{
			count=count+1;
		}
		i=i/10;
	}
	printf("Count=%d",count);
}
