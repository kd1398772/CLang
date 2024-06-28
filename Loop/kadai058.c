#include<stdio.h>
main()
{
	int i;
	for (i = 30; i < 129; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf(" %x  %c ", i, i);

	}

	
}