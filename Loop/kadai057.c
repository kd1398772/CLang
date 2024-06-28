#include<stdio.h>
main()
{
	char a;
	printf("‘å•¶Žš : ");
	scanf("%c", &a);
	for (a; a != 'Z'+1; a++)
	{
		printf("%c ", a);
	}
}