#include<stdio.h>
main()
{
	//1�t���A��3��������2�K���ẴA�p�[�g��2����
	int a[2][2][3] = { {{3,4,5},{4,5,6}},
					  {{ 2,2,3 },{2,5,6}}};
	int i, j, k,sum;

	//�A�p�[�g�̏���
	for (i = 0, sum = 0; i < 2; i++)
	{
		printf("�A�p�[�g%d  ", i + 1);

		//�K���̏���
		for (j = 0; j < 2; j++)
		{
			printf("%d�K : ",j + 1);
			
			//�����̐��ƏZ��ł���l�̐��̏���
			for (k = 0; k < 3; k++)
			{
				printf("%d ", a[i][j][k]);
				sum += a[i][j][k];
			}
			
		}
		printf("\n");
	}
	printf("\n�S�̂�%d�l�Z��ł��܂��B\n", sum);

}