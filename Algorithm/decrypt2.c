#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[20];
	char s[20];

	//乱数のリセット
	srand(time(0));
	rand();

	//文字列を配列s[]にセット
	printf("文字列を入力 : ");
	scanf("%s", &s);

	//暗号化キーを配列k[]にセット
	for (i = 0; s[i] != '\0'; i++)
	{	
		//複合用のキー
		printf("s[%d]の暗号化キー : ", i);
		scanf("%d" ,&k[i]);
	}

	printf("暗号化文字列 : %s",s);
	printf("\n暗号化前は :");
	for (int n = 0; n < i; n++)
	{
		printf(" %c", s[n]-k[n]);
	}
}