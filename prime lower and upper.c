#include<stdio.h>
main()
{
	int lower,upper,i,count;
	printf("enter lower and upper numbers:");
	scanf("%d%d",&lower,&upper);
	printf("prime numbers:%d%d",lower,upper);
	while(lower<=upper)
	{
		i=1;
		count=0;
		while(i<=lower)
		{
			if(lower%i==0)
			{
				count++;
			}
			i++;
		}
		if(count==2)
		{
			printf("%d\t",lower);
		}
		lower++;
	}
}
