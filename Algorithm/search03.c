//バイナリサーチ

#include<stdio.h>

main()
{
	int i,s,low, high, mid, d[] = { 10,15,18,23,28,35,47,55,68,78,96 };

	for (i = 0; i <= 10; i++)
	{
		printf(" %d ", d[i]);
	}

	printf("\n探索値を入力 : ");
	scanf("%d", &s);

	low = 0, high = 10;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}

		if (s > d[mid])
		{
			low = mid + 1;
		}
		if (s < d[mid])
		{
			high = mid - 1;
		}
	}

	if (low > high)
	{
		printf("\n見つからなかった\n");
	}
	else
	{
		printf("\nd[%d]番目にありました\n", mid);
	}
}