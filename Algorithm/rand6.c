#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;

	srand(time(0));
	rand();

	printf("�����o���܂���\n(1:�O�[ 2:�`���L 3:�p�[)  > ");
	scanf("%d", &i);

	j = rand() % 3;

	switch (i)
	{
	case 1:
		printf("\n�v���C���[�̓O�[�ł��B\n");
		break;
	case 2:
		printf("\n�v���C���[�̓`���L�ł��B\n");
		break;
	case 3:
		printf("\n�v���C���[�̓p�[�ł��B\n");
		break;
	}
	switch (j)
	{
	case 0:
		printf("\n�R���s���[�^�̓O�[�ł��B\n");
			break;
	case 1:
		printf("\n�R���s���[�^�̓`���L�ł��B\n");
				break;
	case 2:
		printf("\n�R���s���[�^�̓p�[�ł��B\n");
					break;
	}

	switch (((i - 1) - j + 3) % 3)
	{
	case 0:
		printf("\n�������ł��B\n");
		break;
	case 1:
		printf("\n�R���s���[�^�̏����ł��B\n");
		break;
	case 2:
		printf("\n�v���C���[�̏����ł��B\n");
		break;
	}
}