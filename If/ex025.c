#include<stdio.h>
main()
{
	char moji;
	printf("��������� : ");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z' || moji >= 'a' && moji <= 'z')
	{
		printf("�A���t�@�x�b�g\n");
	}
	else
	{
		if (moji >= '0' && moji <= '9')
		{
			printf("����\n");
		}
		else
		{
			printf("���̑�\n");
		}
	}
}