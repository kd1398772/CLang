#include<stdio.h>
main()
{
	int i;
	char a;
	printf("10�i�� : ");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g (o or x or d >");
	scanf("%*c%c", &a);

	switch (a)
	{
	case ('o'):
			printf("%o", i);
			break;
	case ('O'):
		printf("%o", i);
		break;
	case('x'):
		printf("%x",i);
		break;
	case('X'):
		printf("%x", i);
		break;
	default:
			printf("%d", i);
		break;

	}
	
}