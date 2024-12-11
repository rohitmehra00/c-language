#include<stdio.h>
void main()

{
	// wap a program to find the third angle of tringle if two angle are given
	int first,second,third;
	
	printf("enter the first angle");
	scanf("%d,&first");
	
	printf("enter the second angle");
	scanf("%d,&second");
	 
	third=180-first-second;
	
	printf ("the third angle is :%d",third);
}

