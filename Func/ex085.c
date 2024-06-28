#include<stdio.h>
void hairetu(char* aa, char* bb);

main()
{
	char a[256], b[256];
	printf("”z—ña : ");
	gets(a);
	printf("\n”z—ñb : ");
	gets(b);
	hairetu(a, b);
	printf("\n”z—ña : %s\n", a);
}

void hairetu(char* aa, char* bb)
{
	int i, j;
	for (i = 0; *(aa + i) != '\0'; i++);
	
	for (j = 0; *(bb + j) != '\0'; i++, j++)
	{
		*(aa + i) = *(bb + j);
	}
	*(aa + i) = '\0';

	//for (j = 0; *(aa + i) = *(bb + j); i++, j++);

	return;
}
