#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s = 0, i, d[]={ 10,5,30,77,16,3,47,29,47,33 };
	
	
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", d[i]);
	}

	printf("\n探索値を入力 > ");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("配列の%d番目に見つかった", i);
	}
}