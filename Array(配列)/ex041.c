#include<stdio.h>
main()
{
	float box[3];
	float j= 0.0;
	int i=0;

	for (i = 0; i < 3; i++)
	{
		printf("実数を入力 :  ");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++)
	{
		j += box[i];
	}
	printf("合計 = %.2f\n",j);
	printf("平均 = %.2f", j /i);
	
}