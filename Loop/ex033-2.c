#include<stdio.h>
main()
{
	int num=0, sum = 0,i=-1;

	do
	{
		sum += num;
		printf("”‚Í? : ");
		scanf("%d", &num);
		i++;
	}
	while (num != -999);
	printf("‡Œv = %d\t•½‹Ï = %.2f\n", sum, (float)sum / i);
}
	