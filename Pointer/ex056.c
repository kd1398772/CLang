#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i;//�|�C���^�̏���

	p_tbl = tbl[0];//�A�h���X�̃Z�b�g
				   //&tbl[0][0]�ł�ok
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < sizeof tbl/sizeof (int); i++)
	{
		printf(" %d ", *p_tbl++);//printf("%d",+p_tbl);
								 //p_tbl++;
	}
}