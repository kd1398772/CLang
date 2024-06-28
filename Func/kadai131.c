#include<stdio.h>
main()
{
	char c;
	char dumy[256];

	printf("•¶š(^Z‚ÅI—¹)?");
	c = getchar();
	while (c != EOF)
	{
		
		putchar(c);
		putchar('\n');
		printf("•¶š(^Z‚ÅI—¹)?");
		gets(dumy);
		c = getchar();
		
	}
}