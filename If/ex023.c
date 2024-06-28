#include<stdio.h>
main()
{
	int h,m,s;

	printf("•b”‚ğ“ü—Í : ");
	scanf("%d", &s);
	if (s>= 5000)
	{
		printf("ƒGƒ‰[\n");
	}
	else
	{
		h=s/3600; //3723/3600=1
		s=s%3600; //%123‚ğs‚ÉÄŠi”[
		m = s/ 60; //123/60=2
		s = s% 60; //%3‚ğs‚ÉÄŠi”[
		//h=1,m=2,s=3
		printf("%dŠÔ%d•ª%d•b",h,m,s);
	}
}