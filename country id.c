#include<stdio.h>
main()
{
	int country_id;
	printf("enter country_id:");
	scanf("%d",&country_id);
	if(country_id==1)
	{
		printf("united states\n");
	}
	else if(country_id==2)
	{
		printf("spain\n");
	}
	else if(country_id==3)
	{
		printf("india\n");
	}
	else if(country_id==4)
	{
		printf("austrailia\n");
	}
	else if(country_id==5)
	{
		printf("southafrica\n");
	}
	else
	{
		printf("wrong id\n");
	}
}
