#include<stdio.h>
main()
{
	int i = 20;

	do
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
	
		printf("%3d ", i);
		i--;
	} while (i > 0);
}