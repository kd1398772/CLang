#include<stdio.h>
main()
{
	int num,ans;

	printf("�����H : ");
	scanf("%d", &num);
	ans = num % 2;
	if (ans==0)
	{
		printf("���̐��͋����ł��B\n");
	}
	else 
	{
		printf("���̐��͊�ł��B\n");
	}
}