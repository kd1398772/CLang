#include<stdio.h>
main()
{
	int i=0, j=0, num=0;
	
	
	while (num != -999) {
		i += num;
		printf("整数を入力(-999で終了) : ");
		scanf("%d", &num);	
		j++;
	}
	j - 1;
	printf("合計 = %d \n 平均 = %.2f \n", i, (float)i / j);
}