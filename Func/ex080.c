#include<stdio.h>
#define TBL_END 5	//�}�N����`�A��{�͕ϐ��ƌ����������悤�ɑ啶���ŏ���
int tbl_gokei4(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei = %d\n", gokei);
}

int tbl_gokei4(int* p)
{
	int i = 0, gokei = 0;
	for (i = 0; i < TBL_END; i++)
	{
		gokei += *(p + i);
	}
	return(gokei);
}