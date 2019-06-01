#include<stdio.h>
main()
{
	int n,i=1,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	do
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
		}
		while(i<=n);
		if(count==2)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime number");
		}
}

