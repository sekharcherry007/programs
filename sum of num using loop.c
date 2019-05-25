#include<stdio.h>
main()
{
	int rem,n,sum;
	printf("enter number:");
	scanf("%d",&n);
	for(sum=0;n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of the numbers:%d",sum);
}
