#include<stdio.h>
main()
{
	int i=1;


	for (;;)
	{
		if (i % 2 == 1)
		{
			printf(" %d ", i);
		}
		if (i == 20)
		{
			break;
		}
		i++;

	}
}