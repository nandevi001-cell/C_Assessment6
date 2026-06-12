#include<stdio.h>
int main()
{
	int i=11,ones,sum=0;
	while(i<=99)
	{
		ones=i%10;
		if(ones==5)
		{
		sum=sum+i;	
		}
		i=i+1;
	}
	printf("%d",sum);
}
