#include<stdio.h>
main()
{
	//	 1 0 1 0 1
	//	0 1 0 1
	//	1 0 1
	//	0 1
	//	1
	
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

