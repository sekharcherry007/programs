#include<stdio.h>
main()
{
	int i=2,n;
	printf("enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\t%d",i);
		i=i+2;
	}
}
