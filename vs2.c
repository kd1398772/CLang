#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i=0, j=0, k=1;

	srand(time(0));
	rand();

	i = rand() % 1000 + 1;

	printf("1～1000の中であたりの数を予想してください\n");
	while (1)
	{
		
		printf("あたりの数は -> ");
		scanf("%d", &j);

		if (j < i)
		{
			printf("あたりの数より小さいです。\n");
			k++;
		}
		if (j > i)
		{
			printf("あたりの数より大きいです。\n");
			k++;
		}
		if (j == i)
		{
			printf("正解！%d回目で当たりました！\n", k);
			break;
		}
		

	}

}