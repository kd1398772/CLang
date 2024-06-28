#include<stdio.h>
main()
{
	int i = 0, j = 0;

	while (1)
	{
		printf("®”1(!-999) : ");
		scanf("%d", &i);
		printf("®”2(!-999) : ");
		scanf("%d", &j);

		if (j == 0)
		{
			continue;
		}
		if (i  == -999)
		{
			break;
		}
		if (j == -999)
		{
			break;
		}
		printf("%d / %d = %d ‚ ‚Ü‚è %d\n", i, j, i / j, i % j);

	}
}