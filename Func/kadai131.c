#include<stdio.h>
main()
{
	char c;
	char dumy[256];

	printf("����(^Z�ŏI��)?");
	c = getchar();
	while (c != EOF)
	{
		
		putchar(c);
		putchar('\n');
		printf("����(^Z�ŏI��)?");
		gets(dumy);
		c = getchar();
		
	}
}