#include<stdio.h>
void ire(int i, int j, int k, int *max, int *min);

main()
{
	int a,b,c,max,min;
	

	printf("整数を3つ入力 : ");
	scanf("%d%d%d", &a,&b,&c);

	ire(a,b,c,&max,&min);
	
	printf("最大値 = %d 最小値 = %d", max,min);
}

void ire(int i, int j, int k,int *max,int *min)
{
	*max = (i > j) ? (i > k ? i : k) : (j > k ? j : k);
	*min = (i < j) ? (i < k ? i : k) : (j < k ? j : k);
}