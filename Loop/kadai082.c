#include<stdio.h>
main()
{
	int i=0, j=0,sum=0;

	while (1)
	{
		printf("���� !-999 >");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		if (i < 0)
		{
			continue;
		}
		sum += i;
		j++;
	}
	printf("���v = %d\n���� = %.3f", sum, (float)sum / j);
}