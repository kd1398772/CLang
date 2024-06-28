#include<stdio.h>
main()
{
	int a;
	printf("®” : ");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("+");
	}
	else
	{
		if (a == 0)
		{
			printf("0");
		}
		else
		{
			printf("-");
		}
	}
}