#include<stdio.h>
main()
{
	int month;
	printf("Œ‚ğ“ü—Í : ");
	scanf("%d", &month);

	if (month==2)
	{
		printf("ÅI“ú‚Í28“ú‚Å‚·\n");
	}
	else
	{
		if (month==4 || month==6 || month==9 || month==11)
		{
			printf("ÅI“ú‚Í30“ú‚Å‚·\n");
		}
		else
		{
			printf("ÅI“ú‚Í31“ú‚Å‚·\n");
		}
	}
}