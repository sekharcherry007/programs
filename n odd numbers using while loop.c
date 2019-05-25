#include<stdio.h>
main()
{
	int i=1,n;
	printf("enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\t%d",i);
		i=i+2;
	}
	
}
