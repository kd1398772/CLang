#include<stdio.h>
main()
{
	int year;
	printf("¼—ï‚ğ“ü—Í : ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 ||year%400==0)
	{
		printf("‚¤‚é‚¤”N");
	}
	else
	{
		printf("•½”N");
	}
}