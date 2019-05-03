#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the values:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b)&&(a>=c))
	{
		if(b>=c)
		{
			printf("\n descending order:%d%d%d",a,b,c);
			printf("\n ascending order:%d%d%d",c,b,a);
		}
		else
		{
		    printf("\n descending order:%d%d%d",a,c,b);
			printf("\n ascending order:%d%d%d",b,c,a);	
		}
	}
	else if((b>=a)&&(b>=c))
	{
		if(a>=c)
		{
			printf("\n descending order:%d%d%d",b,a,c);
			printf("\n ascending order:%d%d%d",c,a,b);
		}
		else
		{
			printf("\n descending order:%d%d%d",b,c,a);
			printf("\n ascending order:%d%d%d",a,c,b);
		}
	}
	else if((c>=a)&&(c>=b))
	{
		if(a>=b)
		{
			printf("\n descending order:%d%d%d",c,a,b);
			printf("\n ascending order:%d%d%d",b,a,c);
		}
		else
		{
			printf("\n descending order:%d%d%d",c,b,a);
			printf("\n ascending order:%d%d%d",a,b,c);
		}
	}
}
