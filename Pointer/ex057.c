#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i,j;//�|�C���^�̏���

	p_tbl = tbl[0];//�A�h���X�̃Z�b�g
				   //&tbl[0][0]�ł�ok
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < sizeof tbl/sizeof (int); i++)
	{
		/*if (i % 3 == 0)
		{
			printf("\n");
		}*/
		printf(" %d : %d ", i,*p_tbl++);//printf("%d",+p_tbl);
								 //p_tbl++;
		if (i % 3 == 2)
		{
			printf("\n");
		}
	}

	printf("\n");

	p_tbl = tbl[0];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d  ", *p_tbl++);
		}
		printf("\n");
	}
}