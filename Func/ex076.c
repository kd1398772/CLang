#include<stdio.h>
void kazu(int x, int y, int *go, float *he);

main()
{
	int a, b, g;
	float h;
	printf("������2���� : ");
	scanf("%d%d", &a, &b);
	kazu(a, b, &g, &h);
	printf("���v�́A%d,���ς�%.2f",g,h);
}

void kazu(int x, int y, int* go, float* he)
{
	*go = x + y;
	*he = *go / 2.0;
	return;
}