#include<stdio.h>
main()
{
	int i, j;

	printf("®” : ");
	scanf("%d", &i);
	printf("®”2 : ");
	scanf("%d", &j);

	if (i == j)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢", i, j);
	}
	else
	{
		if (i > j)
		{
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢", i, j, i - j);
		}
		if (i < j)
		{
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", i, j, j - i);
		}
	}
}