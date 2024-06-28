#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int n,i;

	srand(time(0));
	rand();

	n = rand() % 5 + 1;

	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í" );

	for (i = 0; i < n; i++)
	{
		printf(" ™ ");
	}
	printf("‚Å‚·\n");
}