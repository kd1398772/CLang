#include<stdio.h>
main()
{
	int i;

	while (1)
	{
		printf("\n整数 !-999 :");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		printf("8進数 %o 16進数%x", i, i);
	}
}