#include<stdio.h>
main()
{
	int i, j;

	printf("���� : ");
	scanf("%d", &i);
	printf("����2 : ");
	scanf("%d", &j);

	if (i == j)
	{
		printf("%d��%d�͓�����", i, j);
	}
	else
	{
		if (i > j)
		{
			printf("%d�̂ق���%d���%d�傫��", i, j, i - j);
		}
		if (i < j)
		{
			printf("%d�̂ق���%d���%d������", i, j, j - i);
		}
	}
}