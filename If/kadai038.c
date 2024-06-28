#include<stdio.h>
main()
{
	char a;
	printf("ˆê•¶Žš“ü—Í : ");
	scanf("%c", &a);

	if (a >= 'a' && a <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í %c ", a - 32);
	}
	if (a >= 'A' && a <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í %c ", a + 32);
	}
}