#include<stdio.h>
main()
{
	int num, sum=0;
	
	while(1)
	{
		printf("数をいれて ： ");
		scanf("%d", &num);
		
		if (num == -999)
		{
			break;
		}

		sum = sum + num;
	} 
	printf("合計 : %d\n", sum);
}