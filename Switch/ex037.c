#include<stdio.h>
main()
{
	char moji;
	printf("���Z�q������ : ");
	scanf("%c", &moji);

	switch (moji)
	{
	case ('+'):
		printf("���Z�ł�");
		break;
	case ('-'):
		printf("���Z�ł�");
		break;
	case('*'):
		printf("��Z�ł�");
		break;
	case ('/'):
		printf("���Z�ł�");
		break;
	case('%'):
		printf("���܂�ł�");
		break;
	default:
		printf("���̑��ł�");
	}
}