#include<stdio.h>
main()
{
	int i;
	for (i = 1; i < 61; i++)
	{
		printf(" %d ", i);
		if (i % 20 == 0)
		{
			printf("\n");
		}
	}
}