#include<stdio.h>
main()
{
	int year;
	printf("西暦を入力 : ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 ||year%400==0)
	{
		printf("うるう年");
	}
	else
	{
		printf("平年");
	}
}