#include<stdio.h>
main()
/* {
	int i;
	char data[] = "orange";

	for (i = 0; data[i] != '\0'; i++);
	printf("文字列 : %s\n", &data[0]);
	printf("文字数は%d文字\n", i);
}*/
{
	int i;
	char data[80];

	printf("文字列 : ");
	scanf("%s", &data[80]);


	for (i = 0; data[i] != '\0'; i++);
	printf("文字数は%d文字\n", i);
}