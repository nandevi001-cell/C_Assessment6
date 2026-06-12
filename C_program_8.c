#include<stdio.h>
int main()
{
	int i=12,tens,ones,sum;
	while(i<=99)
	{
		tens=i/10;
		ones=i%10;
		sum=tens+ones;
		if(i%2==0 && sum==6)
		{
			printf("%d\n",i);
		}
		i=i+2;
	}
}
