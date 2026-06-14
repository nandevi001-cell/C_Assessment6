#include<stdio.h>
int main()
{
	int i,ones,count=0;
	printf("Enter a number:");
	scanf("%d",&i);
	while(i>0)
	{
		ones=i%10;
		if(ones==1 || ones==4 || ones==9)
		{
			count=count+1;
		}
		i=i/10;
	}
	printf("Total number of single-digit perfect square number:%d",count);
}
