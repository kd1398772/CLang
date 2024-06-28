#include<stdio.h>


main()
{
	int data[256], cnt, ret,*max,*min;

	printf("®”(^Z‚ÅI—¹)? ");
	ret = scanf("%d", &data);
	max = &data[0];
	min = &data[0];

	for (cnt=0;ret != EOF;cnt++)
	{
		printf("®”(^Z‚ÅI—¹)? ");
		ret = scanf("%d", &data[cnt]);
		if (data[cnt] > max)
		{
			max = data[cnt];
		}
		if (data[cnt] < min)
		{
			min = data[cnt];
		}
	}
	
	printf("max = %d\nmin = %d\n", max, min);
	
}