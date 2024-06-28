#include<stdio.h>
void kazu(int x, int y, int *go, float *he);

main()
{
	int a, b, g;
	float h;
	printf("®”‚ğ2‚Â“ü—Í : ");
	scanf("%d%d", &a, &b);
	kazu(a, b, &g, &h);
	printf("‡Œv‚ÍA%d,•½‹Ï‚Í%.2f",g,h);
}

void kazu(int x, int y, int* go, float* he)
{
	*go = x + y;
	*he = *go / 2.0;
	return;
}