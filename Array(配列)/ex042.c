#include<stdio.h>
main()
{
	printf("1文字ずつ表示 \n");
	int i;
	char data[]= "Apple";

	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}
	printf("\n文字列を表示\n");
	//printf("%s \n",&data[0]);//%sの時は&を使ってアドレスを指定
	printf("%s \n",data);//配列名だけ書くと先頭アドレスを表す
}