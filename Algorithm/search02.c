#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10+1] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("’Tõ’l‚ð“ü—Í : ");
	scanf("%d", &s);

	//”Ô•º‚ðŽdž‚Þ
	d[11]=s;

	for (i = 0; s != d[i]; i++)
	{

	}
	
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½",i);
	}
}