#include<stdio.h>
main()
/* {
	int i;
	char data[] = "orange";

	for (i = 0; data[i] != '\0'; i++);
	printf("������ : %s\n", &data[0]);
	printf("��������%d����\n", i);
}*/
{
	int i;
	char data[80];

	printf("������ : ");
	scanf("%s", &data[80]);


	for (i = 0; data[i] != '\0'; i++);
	printf("��������%d����\n", i);
}