#include<stdio.h>
main()
{
	int h,m,s;

	printf("bšüĶ : ");
	scanf("%d", &s);
	if (s>= 5000)
	{
		printf("G[\n");
	}
	else
	{
		h=s/3600; //3723/3600=1
		s=s%3600; //%123šsÉÄi[
		m = s/ 60; //123/60=2
		s = s% 60; //%3šsÉÄi[
		//h=1,m=2,s=3
		printf("%dŌ%dŖ%db",h,m,s);
	}
}