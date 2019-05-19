#include<stdio.h>
main()
{
	int country_id;
	printf("enter country_id:");
	scanf("%d",&country_id);
	switch(country_id)
	{
	case 1:
	printf("united states\n");
	break;
	case 2:
	printf("spain\n");
	break;
	case 3:
	printf("india\n");
	break;
	case 4:
	printf("austrailia\n");
	break;
	case 5:
	printf("southafrica\n");
    break;
    default:
	printf("wrong id\n");
	}
}
