#include<stdio.h>
int main()
{
	int i=1,count=0,ones,sum,n,digit;
	while(i<100000)
	{
		n=i;
		sum=0;
		while(n>0)
		{
			digit=n%10;
			sum=sum+digit;
			n=n/10;
		}
		if(sum==14)
		{
			count=count+1;
		}
		i=i+1;
	}
	printf("Count=%d",count);
}
