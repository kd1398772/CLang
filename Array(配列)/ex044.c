#include<stdio.h>
main()
{
	int i;
	char moji1[50], moji2[50], w[50];

	printf("������1����� : ");
	scanf("%s", &moji1[0]);
	printf("\n������2����� : ");
	scanf("%s", &moji2[0]);

	printf("\nmoji1 = %s\t", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);

	
	//moji1��w�ɃR�s�[
	for (i = 0; moji1[i] != '\0'; i++)
	{
		w[i] = moji1[i];
	}
	
	//\0�������
	w[i] = '\0';

	//moji2��moji1�ɃR�s�[
	for (i = 0; moji2[i] != '\0'; i++)
	{
		moji1[i] = moji2[i];
	}
	
	//\0�������
	moji1[i] = '\0';
	
	//w��moji2�ɃR�s�[
	for (i = 0; w[i] != '\0'; i++)
	{
		moji2[i] = w[i];
	}

	//\0�������
	moji2[i] = '\0';

	printf("����ւ����\n");
	printf("moji1 = %s\t", &moji1[0]);
	printf("moji2 = %s\n", &moji2[0]);

}