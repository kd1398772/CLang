#include<stdio.h>
main()
{
	int i=0, j=0,sum=0;

	while (1)
	{
		printf("®” !-999 >");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		sum += i;
		j++;
	}
	printf("‡Œv = %d\n•½‹Ï = %.2f", sum, (float)sum / j);
}