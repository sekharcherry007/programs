#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("enter number:");
	scanf("%d",&n);
	i=2;
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	printf("factorial number:%d",fact);
}
