#include<stdio.h>
main()
{
	float i, j;
	printf("2つの実数を入力 : ");
	scanf("%f %f", &i,&j);

	if (i > j)
	{
		printf("大きいほうは%.2f", i);
	}
	if (i < j)
	{
		printf("大きいほうは%.2f", j);
	}
}