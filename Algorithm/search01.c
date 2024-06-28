#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s = 0, i, d[]={ 10,5,30,77,16,3,47,29,47,33 };
	
	
	for (i = 0; i < 10; i++)
	{
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