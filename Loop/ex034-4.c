#include<stdio.h>
main()
{
	int num,i=0,j;

	printf("���� : ");
	scanf("%d", &num);
	do
	{
		j = 0;//���[�v�̑O�ɃJ�E���^��������
		do
		{	//�󔒏o��
			printf(" ");
			j++;
		} while (j < num - i);
		j = 0;//���[�v�̑O�ɃJ�E���^��������
		do
		{	//*�o��
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
			i++;
	} while (i < num);
}