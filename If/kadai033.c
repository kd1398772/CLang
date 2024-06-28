#include<stdio.h>
main()
{
	char a;
	printf("アルファベット : ");
		scanf("%c", &a);
	if ('a' <= a && 'z' >= a)
	{
		printf("小文字です");
	}
	if ('A' <= a && 'Z' >= a)
	{
		printf("大文字です");
	}
}