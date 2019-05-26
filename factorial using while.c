#include<stdio.h>
main()
{
	int i=2,n,fact=1;
	printf("enter number:");
	scanf("%d",&n);
    while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial number:%d",fact);
}
