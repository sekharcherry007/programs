#include<stdio.h>
main()
{
	int age;
	char marriagestatus,gender;
	printf("enter marriagestatus,gender,age:");
	scanf("%c%c%d",&marriagestatus,&gender,&age);
	if(marriagestatus=='m')
	{
		printf("you can not marry");
	}
	else if(marriagestatus=='u')
	{
		if(gender=='m')
		{
			if(age>=21)
			printf("you can marry");
			else
			printf("you can not marry");
		}
		else if(gender=='f')
		{
			if(age>=18)
			printf("you can marry");
			else
			printf("you can not marry");
		}
	else
	printf("invalid input gender");	
	}
	else
	printf("invalid input material");
}
