#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
