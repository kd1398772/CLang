#include<stdio.h>
main()
{
	int num=0, sum = 0,i=-1;

	do
	{
		sum += num;
		printf("数は? : ");
		scanf("%d", &num);
		i++;
	}
	while (num != -999);
	printf("合計 = %d\t平均 = %.2f\n", sum, (float)sum / i);
}
	