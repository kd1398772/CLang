#include<stdio.h>
main()
{
	char n;
	printf("小文字を入力 : ");
	scanf("%c",&n);
	printf("大文字 = %c \n", n-32);
}