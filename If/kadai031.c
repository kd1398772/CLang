#include<stdio.h>
main()
{
	float i, j;
	printf("2�̎�������� : ");
	scanf("%f %f", &i,&j);

	if (i > j)
	{
		printf("�傫���ق���%.2f", i);
	}
	if (i < j)
	{
		printf("�傫���ق���%.2f", j);
	}
}