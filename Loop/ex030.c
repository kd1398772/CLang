#include<stdio.h>
main()
{
	int num ,i,j;
	i = 0;
	j = 11;
	
	printf("�������� : ");
	scanf("%d", &num);

	while (i < j)
	{
		printf(" %d + %d = %d \n",num,i ,num + i);
		i++;
	}
}