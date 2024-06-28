#include<stdio.h>
main()
{
	float i, j;
	printf("2‚Â‚ÌŽÀ”‚ð“ü—Í : ");
	scanf("%f %f", &i,&j);

	if (i > j)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%.2f", i);
	}
	if (i < j)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%.2f", j);
	}
}