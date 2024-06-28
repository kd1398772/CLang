#include<stdio.h>
main()
{
	int i=1,sum=0;

	do
	{
	sum += i;
	printf("%d ",i );
	i++;
	} while (sum <= 300);
	printf("=%d", sum);
}