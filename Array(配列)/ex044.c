#include<stdio.h>
main()
{
	int i;
	char moji1[50], moji2[50], w[50];

	printf("文字列1を入力 : ");
	scanf("%s", &moji1[0]);
	printf("\n文字列2を入力 : ");
	scanf("%s", &moji2[0]);

	printf("\nmoji1 = %s\t", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);

	
	//moji1をwにコピー
	for (i = 0; moji1[i] != '\0'; i++)
	{
		w[i] = moji1[i];
	}
	
	//\0をいれる
	w[i] = '\0';

	//moji2をmoji1にコピー
	for (i = 0; moji2[i] != '\0'; i++)
	{
		moji1[i] = moji2[i];
	}
	
	//\0をいれる
	moji1[i] = '\0';
	
	//wをmoji2にコピー
	for (i = 0; w[i] != '\0'; i++)
	{
		moji2[i] = w[i];
	}

	//\0をいれる
	moji2[i] = '\0';

	printf("入れ替えると\n");
	printf("moji1 = %s\t", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);

}