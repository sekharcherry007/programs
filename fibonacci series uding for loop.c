#include<stdio.h>
main()
{
	int fib1=0,fib2=1,fib3,n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("fibanocci series:%d%d",fib1,fib2);
	for(fib3=fib1+fib2;fib3<=n;fib3=fib1+fib2)
	{
		printf("%d",fib3);
		fib1=fib2;
		fib2=fib3;
	}
}

