#include<stdio.h>
void kazu(int x, int y, int *go, float *he);

main()
{
	int a, b, g;
	float h;
	printf("整数を2つ入力 : ");
	scanf("%d%d", &a, &b);
	kazu(a, b, &g, &h);
	printf("合計は、%d,平均は%.2f",g,h);
}

void kazu(int x, int y, int* go, float* he)
{
	*go = x + y;
	*he = *go / 2.0;
	return;
}