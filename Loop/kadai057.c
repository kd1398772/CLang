#include<stdio.h>
main()
{
	char a;
	printf("�啶�� : ");
	scanf("%c", &a);
	for (a; a != 'Z'+1; a++)
	{
		printf("%c ", a);
	}
}