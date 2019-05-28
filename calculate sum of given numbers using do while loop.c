#include<stdio.h>
main()
{
	int n,newn,i=1,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	printf("enter numbers:");
	do
	{
		scanf("%d",&newn);
		sum=sum+newn;
		i++;
	}
	while(i<=n);
	printf("sum of the digits:%d",sum);
	
	
}
