#include<stdio.h>
main()
{
	int data, sum = 0,cnt=0;
	int ret;

	printf("®”(^Z‚ÅI—¹)? ");
	ret = scanf("%d", &data);

	while (ret != EOF)
	{
		sum += data;
		cnt++;
		printf("®”(^Z‚ÅI—¹)? ");
		ret = scanf("%d", &data);

	}

	printf("‡Œv = %d •½‹Ï = %.2f ", sum, (float)sum / cnt);
}