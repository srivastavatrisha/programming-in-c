#include<stdio.h>
int main()
{
	int income,tax=0;
	printf("enter the income");
	scanf("%d",&income);
	if(income<=250000)
	{
		printf("no tax");
	}
	else if(income>=250000&&income<=500000)
	{
		tax=(income-250000)*0.05;
	}
	else if(income>=500000&&income<=750000)
	{
		tax=(income-500000)*0.10+12500;
	}
	else if(income>=750000&&income<=1000000)
	{
		tax=(income-750000)*0.15+37500;
	}
	else if	(income>=1000000&&income<=1250000)
	{
		tax=(income-1000000)*0.20+75000;
	}
	else if(income>=1250000&&income<=1500000)
	{
		tax=(income-1250000)*0.25+125000;
	}
	else 
	{
		(income-1500000)*0.30+187500;
	}
	printf("%d",tax);
	
}
