#include<stdio.h>
main()
{
	int num,i=0,j;

	printf("���� : ");
	scanf("%d", &num);
	do
	{
		j = 0;
		do
		{
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
			i++;
	} while (i < num);
}