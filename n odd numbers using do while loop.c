#include<stdio.h>
main()
{
	int i=1,n;
	printf("enter number:");
	scanf("%d",&n);
    do
	{
		printf("\t%d",i);
		i=i+2;
	}
	while(i<=n);
	
}
