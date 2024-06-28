#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int sum=0, num=0;

	for (int i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	for (int j = 0; j < 10; j++)
	{
		num += b[j];
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("‡Œv = %d\t•½‹Ï = %d\n", sum, sum / 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	printf("‡Œv = %d\t•½‹Ï = %d", num, num / 10);

}