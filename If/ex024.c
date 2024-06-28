#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í : ");
	scanf("%c", &moji);

	if (moji >= 'A')
	{
		if (moji <= 'Z')
		{
			printf("‘å•¶Žš‚Å‚·\n");
		}
		else
		{
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
		}
	}
	else
	{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}