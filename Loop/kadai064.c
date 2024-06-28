#include<stdio.h>
main()
{
	int i = 20;

	while (i > 0)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
	
		printf("%3d ", i);
		i--;
	} 
}