#include<stdio.h>
main()
{
	int num, i;
	i = 0;

	printf("�������� : ");
	scanf("%d", &num);
	
	while (i < num)
	{	
		//i��num������������*��\������i��1�𑫂�����
		printf("*");
		i++;
	}
}