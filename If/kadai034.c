#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g : ");
		scanf("%c", &a);
	if ('a' <= a && 'z' >= a)
	{
		printf("�������ł�");
	}
	else
	{
		if ('A' <= a && 'Z' >= a)
		{
			printf("�啶���ł�");
		}
		else
		{
			printf("�G���[");
		}
	}
}