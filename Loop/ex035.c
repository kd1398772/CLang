#include<stdio.h>
main()
{
	int num, sum=0;
	
	while(1)
	{
		printf("��������� �F ");
		scanf("%d", &num);
		
		if (num == -999)
		{
			break;
		}

		sum = sum + num;
	} 
	printf("���v : %d\n", sum);
}