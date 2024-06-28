#include<stdio.h>
main()
{
	float box[3];
	float j= 0.0;
	int i=0;

	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í :  ");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++)
	{
		j += box[i];
	}
	printf("‡Œv = %.2f\n",j);
	printf("•½‹Ï = %.2f", j /i);
	
}