#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;

	srand(time(0));
	rand();

	printf("何を出しますか\n(1:グー 2:チョキ 3:パー)  > ");
	scanf("%d", &i);

	j = rand() % 3;

	switch (i)
	{
	case 1:
		printf("\nプレイヤーはグーです。\n");
		break;
	case 2:
		printf("\nプレイヤーはチョキです。\n");
		break;
	case 3:
		printf("\nプレイヤーはパーです。\n");
		break;
	}
	switch (j)
	{
	case 0:
		printf("\nコンピュータはグーです。\n");
			break;
	case 1:
		printf("\nコンピュータはチョキです。\n");
				break;
	case 2:
		printf("\nコンピュータはパーです。\n");
					break;
	}

	switch (((i - 1) - j + 3) % 3)
	{
	case 0:
		printf("\nあいこです。\n");
		break;
	case 1:
		printf("\nコンピュータの勝ちです。\n");
		break;
	case 2:
		printf("\nプレイヤーの勝ちです。\n");
		break;
	}
}