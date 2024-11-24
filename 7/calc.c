#include<stdio.h>

float a(float num1,float num2)
{
	return (num1+num2);
}

float s(float num1,float num2)
{
	return (num1-num2);
}

float m(float num1,float num2)
{
	return (num1*num2);
}

float d(float num1,float num2)
{
	return (num1/num2);
}

void main()
{
	float num1,num2,ans;
	char choic;
	printf("enter num 1:");
	scanf("%f",&num1);
	
	printf("enter num 2:");
	scanf("%f",&num2);
	
	
	printf("enter your choic:");
	scanf(" %c",&choic);
	
	switch(choic)
	{
		case'+':
		printf("%f",a(num1,num2));
		break;
		
		case'-':
		printf("%f",s(num1,num2));
		break;
		
		case'*':
		printf("%f",m(num1,num2));
		break;
		
		case'/':
		printf("%f",d(num1,num2));
		break;
		
		defult: printf("enter valid choic");
	}
}