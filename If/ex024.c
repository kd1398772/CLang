#include<stdio.h>
main()
{
	char moji;
	printf("��������� : ");
	scanf("%c", &moji);

	if (moji >= 'A')
	{
		if (moji <= 'Z')
		{
			printf("�啶���ł�\n");
		}
		else
		{
			printf("���̑��̕����ł�\n");
		}
	}
	else
	{
		printf("���̑��̕����ł�\n");
	}
}