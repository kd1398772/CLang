#include<stdio.h>
main()
{
	int num ,i,j;
	i = 0;
	j = 11;
	
	printf("数を入れて : ");
	scanf("%d", &num);

	while (i < j)
	{
		printf(" %d + %d = %d \n",num,i ,num + i);
		i++;
	}
}