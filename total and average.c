#include<stdio.h>
main()
{
	int roll_number,m1,m2,m3,total;
	float average;
	printf("enter roll number:");
	scanf("%d",&roll_number);
	printf("enter marks m1:");
	scanf("%d",&m1);
	printf("enter marks m2:");
	scanf("%d",&m2);
	printf("enter marks m3:");
	scanf("%d",&m3);
	total = m1+m2+m3;
	average = total/3;
	printf("\n student roll number:%d",roll_number);
	printf("\n marks m1:%d",m1);
	printf("\n marks m2:%d",m2);
	printf("\n marks m3:%d",m3);
	printf("\n total:%d",total);
	printf("\n average:%f",average);
}
