#include<stdio.h>
main()
{
	int num,asta;
	printf("”‚Í : ");
	scanf("%d", &num);
	do
	{
		asta = 0;
		do
		{
			printf("*");
			asta++;
		} while (asta < 5)
		printf("\n");
		num--;
	} 
	while (num > 0);
		
}