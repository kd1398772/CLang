#include<stdio.h>
main()
{
	int i;
	char s[30];

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	
		printf("•¡‡Ï‚İ•¶š—ñ‚Í %s ", s);
}