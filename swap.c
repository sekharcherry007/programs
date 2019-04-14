#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter values:");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d,b=%d",a,b);
}
