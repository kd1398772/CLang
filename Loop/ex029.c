#include<stdio.h>
main()
{
	int num, i;
	i = 0;

	printf("数を入れて : ");
	scanf("%d", &num);
	
	while (i < num)
	{	
		//iがnum未満だったら*を表示してiに1を足す処理
		printf("*");
		i++;
	}
}