#include<stdio.h>
main()
{
	int num,ans;

	printf("整数？ : ");
	scanf("%d", &num);
	ans = num % 2;
	if (ans==0)
	{
		printf("その数は偶数です。\n");
	}
	else 
	{
		printf("その数は奇数です。\n");
	}
}