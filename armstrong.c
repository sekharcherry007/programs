#include<stdio.h>
main()
{
	int i,n,rem,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(i==sum)
	printf("armstrong number");
	else
	printf("not armstrong number");
}
