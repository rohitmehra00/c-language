#include<stdio.h>
main()
{
	//A
	//B C
	//D E F
	//G H I J
	//K L M N O
	char i,j,x='a';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",x);
			x++;
		}
		printf("\n");
	}
}
