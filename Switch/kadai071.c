#include<stdio.h>
main()
{
	char moji;
	int i=0, j=0;
	printf("®”1 : ");
	scanf("%d", &i);
	printf("®”2 : ");
	scanf("%d", &j);
	printf("‰‰Zq : ");
	scanf("%*c%c",&moji);

	switch (moji)
	{
	case ('+'):
		printf("%d + %d = %d", i, j, i + j);
		break;
	case ('-'):
		printf("%d - %d = %d", i, j, i - j);
		break;
	case('*'):
		printf("%d * %d = %d", i, j, i * j);
		break;
	case ('/'):
		printf("%d / %d = %d", i, j, i / j);
		break;
	case('%'):
		printf("%d % %d = %d", i, j, i % j);
		break;
	}
}