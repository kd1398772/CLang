#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s = 0, i, d[100];
	
	srand(time(0));
	rand();
	
	
	
	for (i = 0; i < 10; i++)
	{
		d[i] = rand() % 100+1;
		printf(" %d ", d[i]);
	}

	printf("\n’Tõ’l‚ð“ü—Í > ");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½", i);
	}
}