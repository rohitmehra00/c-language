#include<stdio.h>
main()
{
	//	1
	//	2 3
	//	4 5 6
	//	7 8 9 10
	//	11 12 13 14 15
	
	int i,j,x=1;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			if(j%2==0)
			{
				printf(" 0");
			}
			else
			{
				printf(" 1");
			}
		}
		printf("\n");
	}
}

