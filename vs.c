#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{

	//�v���C���[��HP
	int playerHP[2] = { 100,100 };
	int PlayerCom[2] = {};

	srand(time(0));
	rand();

	while (1)
	{
		printf("�v���C���[1�̃^�[��! (1:�ʏ�U�� 2:���U�� 3:�� 4:��������̂�������)  > ");
		scanf("%d", &PlayerCom[0]);

		switch (PlayerCom[0])
		{
		case 1:
			printf("�ʏ�U��!\n");
			playerHP[1] -= rand() & 30 + 1;//�G�ւ̃_��
			break;
		case 2:
			printf("���U��!!\n");
			playerHP[1] -= rand() % 21 + 40;//�G�ւ̃_��
			playerHP[0] -= rand() % 25;	//�����_��
			break;
		case 3:
			printf("��\n");
			playerHP[0] += 30 + 1;//��
			break;
		case 4:
			printf("��������̂�������!!!\n");
			//rand3.c
			int k;
			k = rand() % 100 + 1;

			if (k <= 5)
			{
				printf("��������̂�������!!!\n");
				playerHP[1] -= 100;
				break;
			}
			else
			{
				printf("������Ȃ�����!\n\n");
				break;
			}
		}

		if (playerHP[0] <= 0)
		{
			printf("���ł���");
			break;
		}

		if (playerHP[1] <= 0)
		{
			printf("�v���C���[2��|����");
			break;
		}

		printf("�v���C���[1�̗̑� : %d\n\n", playerHP[0]);
		printf("�v���C���[2�̗̑� : %d\n\n", playerHP[1]);

		printf("\n\n ================================ \n\n");


		printf("�v���C���[2�̃^�[��! (1:�ʏ�U�� 2:���U�� 3:�� 4:��������̂�������)  > ");
		scanf("%d", &PlayerCom[1]);

		switch (PlayerCom[1])
		{
		case 1:
			printf("�ʏ�U��!\n");
			playerHP[0] -= rand() & 30 + 1;//�G�ւ̃_��
			break;
		case 2:
			printf("���U��!!\n");
			playerHP[0] -= rand() % 21 + 40;//�G�ւ̃_��
			playerHP[1] -= rand() % 25;	//�����_��
			break;
		case 3:
			printf("��\n");
			playerHP[1] += 30 + 1;//��
			break;
		case 4:
			printf("��������̂�������!!!\n");
			int k;
			k = rand() % 100 + 1;

			if (k <= 5)
			{
				printf("��������̂�������!!!\n");
				playerHP[0] -= 100;
				break;
			}
			else
			{
				printf("������Ȃ�����!\n\n");
				break;
			}
		}
		if (playerHP[0] <= 0)
		{
			printf("�v���C���[1��|����");
			break;
		}
		if (playerHP[1] <= 0)
		{
			printf("���ł���");
			break;
		}
		printf("�v���C���[1�̗̑� : %d\n\n", playerHP[0]);
		printf("�v���C���[2�̗̑� : %d\n\n", playerHP[1]);

		printf("\n\n ================================ \n\n");

	}
}