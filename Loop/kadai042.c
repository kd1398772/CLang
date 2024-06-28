#include<stdio.h>
main()
{
	int i=1,num=0;

	printf("%d", i);
	num = i + num;
	while (num <= 300)
	{
		i++;
		printf("+%d",i);
		num = i + num;
	}
	printf("=%d", num);
}