#include<stdio.h>
main()
{
	char c;
	char dumy[256];

	printf("文字(^Zで終了)?");
	c = getchar();
	while (c != EOF)
	{
		
		putchar(c);
		putchar('\n');
		printf("文字(^Zで終了)?");
		gets(dumy);
		c = getchar();
		
	}
}