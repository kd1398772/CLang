#include<stdio.h>
int add(int a, int b);
main()
{
	int a, b, kotae;
	printf("������2���� : ");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v = %d", kotae);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}