#include<stdio.h>
main()
{
	int i;
	printf("break test program\n");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)//i��7�ɂȂ����珈�����I���
		{
			break;
		}
		printf("%3d", i);
	}

	printf("\n\ncontinue test program\n ");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)//i��7�ɂȂ����炻�̏������΂�
		{
			continue;
		}
		printf("%3d", i);//%3d��3�������̃X�y�[�X���J����
	}
}