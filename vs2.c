#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i=0, j=0, k=1;

	srand(time(0));
	rand();

	i = rand() % 1000 + 1;

	printf("1�`1000�̒��ł�����̐���\�z���Ă�������\n");
	while (1)
	{
		
		printf("������̐��� -> ");
		scanf("%d", &j);

		if (j < i)
		{
			printf("������̐���菬�����ł��B\n");
			k++;
		}
		if (j > i)
		{
			printf("������̐����傫���ł��B\n");
			k++;
		}
		if (j == i)
		{
			printf("�����I%d��ڂœ�����܂����I\n", k);
			break;
		}
		

	}

}