#include<stdio.h>
main()
{
	int num, i;
	i = 0;

	printf("”‚ğ“ü‚ê‚Ä : ");
	scanf("%d", &num);
	
	while (i < num)
	{	
		//i‚ªnum–¢–‚¾‚Á‚½‚ç*‚ğ•\¦‚µ‚Äi‚É1‚ğ‘«‚·ˆ—
		printf("*");
		i++;
	}
}