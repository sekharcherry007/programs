#include<stdio.h>
main()
{
	int rollnumber,m1,m2,m3,total;
	float average;
	printf("enter roll number:");
	scanf("%d",&rollnumber);
	printf("enter values:");
	scanf("%d%d%d",&m1,&m2,&m3);
	total = m1+m2+m3;
	average = total/3;
	printf("\n total=%d",total);
	printf("\n average=%f",average);
	if(average>=60)
	printf("\n grade:a");
	else if((average>=50)&&(average<60))
	printf("\n grade:b");
	else if((average>=40)&&(average<50))
	printf("\n grade:c");
	else
	printf("\n grade:f");
}
