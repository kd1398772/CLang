#include<stdio.h>
main()
{
	int num, sum=0;
	
	while(1)
	{
		printf("”‚ğ‚¢‚ê‚Ä F ");
		scanf("%d", &num);
		
		if (num == -999)
		{
			break;
		}

		sum = sum + num;
	} 
	printf("‡Œv : %d\n", sum);
}