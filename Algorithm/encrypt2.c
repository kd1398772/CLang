#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[20];
	char s[20];

	srand(time(0));
	rand();

	printf("���������� : ");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;

		s[i] = s[i] + k[i];
	}
	printf("�Í��������� : %s",s);
	printf("\n�Í����L�[ :");
	for (int n = 0; n < i; n++)
	{
		printf(" %d", k[n]);
	}
}