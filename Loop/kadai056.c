#include<stdio.h>
main()
{
	char a;
	printf("������ : ");
	scanf("%c", &a);
	for (a; a != 'z'+1; a++)
	{
		printf("%c ", a);
	}
}