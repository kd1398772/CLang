#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{

	//プレイヤーのHP
	int playerHP[2] = { 100,100 };
	int PlayerCom[2] = {};

	srand(time(0));
	rand();

	while (1)
	{
		printf("プレイヤー1のターン! (1:通常攻撃 2:強攻撃 3:回復 4:かいしんのいちげき)  > ");
		scanf("%d", &PlayerCom[0]);

		switch (PlayerCom[0])
		{
		case 1:
			printf("通常攻撃!\n");
			playerHP[1] -= rand() & 30 + 1;//敵へのダメ
			break;
		case 2:
			printf("強攻撃!!\n");
			playerHP[1] -= rand() % 21 + 40;//敵へのダメ
			playerHP[0] -= rand() % 25;	//自傷ダメ
			break;
		case 3:
			printf("回復\n");
			playerHP[0] += 30 + 1;//回復
			break;
		case 4:
			printf("かいしんのいちげき!!!\n");
			//rand3.c
			int k;
			k = rand() % 100 + 1;

			if (k <= 5)
			{
				printf("かいしんのいちげき!!!\n");
				playerHP[1] -= 100;
				break;
			}
			else
			{
				printf("当たらなかった!\n\n");
				break;
			}
		}

		if (playerHP[0] <= 0)
		{
			printf("自滅した");
			break;
		}

		if (playerHP[1] <= 0)
		{
			printf("プレイヤー2を倒した");
			break;
		}

		printf("プレイヤー1の体力 : %d\n\n", playerHP[0]);
		printf("プレイヤー2の体力 : %d\n\n", playerHP[1]);

		printf("\n\n ================================ \n\n");


		printf("プレイヤー2のターン! (1:通常攻撃 2:強攻撃 3:回復 4:かいしんのいちげき)  > ");
		scanf("%d", &PlayerCom[1]);

		switch (PlayerCom[1])
		{
		case 1:
			printf("通常攻撃!\n");
			playerHP[0] -= rand() & 30 + 1;//敵へのダメ
			break;
		case 2:
			printf("強攻撃!!\n");
			playerHP[0] -= rand() % 21 + 40;//敵へのダメ
			playerHP[1] -= rand() % 25;	//自傷ダメ
			break;
		case 3:
			printf("回復\n");
			playerHP[1] += 30 + 1;//回復
			break;
		case 4:
			printf("かいしんのいちげき!!!\n");
			int k;
			k = rand() % 100 + 1;

			if (k <= 5)
			{
				printf("かいしんのいちげき!!!\n");
				playerHP[0] -= 100;
				break;
			}
			else
			{
				printf("当たらなかった!\n\n");
				break;
			}
		}
		if (playerHP[0] <= 0)
		{
			printf("プレイヤー1を倒した");
			break;
		}
		if (playerHP[1] <= 0)
		{
			printf("自滅した");
			break;
		}
		printf("プレイヤー1の体力 : %d\n\n", playerHP[0]);
		printf("プレイヤー2の体力 : %d\n\n", playerHP[1]);

		printf("\n\n ================================ \n\n");

	}
}