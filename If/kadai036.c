#include<stdio.h>
main()
{
	int i, j;

	printf("整数 : ");
	scanf("%d", &i);
	printf("整数2 : ");
	scanf("%d", &j);

	if (i == j)
	{
		printf("%dと%dは等しい", i, j);
	}
	else
	{
		if (i > j)
		{
			printf("%dのほうが%dより%d大きい", i, j, i - j);
		}
		if (i < j)
		{
			printf("%dのほうが%dより%d小さい", i, j, j - i);
		}
	}
}