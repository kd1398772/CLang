#include<stdio.h>
main()
{
	int i=0, j=0, num=0;
	
	
	while (num != -999) {
		i += num;
		printf("���������(-999�ŏI��) : ");
		scanf("%d", &num);	
		j++;
	}
	j - 1;
	printf("���v = %d \n ���� = %.2f \n", i, (float)i / j);
}