#include<stdio.h>
main()
{
	int n,newn,i,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	printf("enter numbers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&newn);
		sum=sum+newn;
	}
	printf("sum of the digits:%d",sum);
	
	
}
