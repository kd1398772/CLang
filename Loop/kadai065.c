#include<stdio.h>
main()
{
	int i=0, j=0, num=0, sum=0;
	
	do
	{
	
		num = num + i;
		printf("����(-999) : ");
		scanf("%d", &i);
		j++;
	

	} while (i != -999);
	j--;
	printf("���v = %d \n���� = %.2f", num, (float)num / j);

}