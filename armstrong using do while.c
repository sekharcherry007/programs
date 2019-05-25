#include<stdio.h>
main()
{
	int i,n,rem,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	i=n;
	do
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	while(n>0);
	if(i==sum)
	printf("armstrong number");
	else
	printf("not armstrong number");
}
