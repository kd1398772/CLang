#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10+1] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("�T���l����� : ");
	scanf("%d", &s);

	//�ԕ����d����
	d[11]=s;

	for (i = 0; s != d[i]; i++)
	{

	}
	
	if (i >= 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("%d�ԖڂɌ�������",i);
	}
}