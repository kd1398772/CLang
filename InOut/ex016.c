#include<stdio.h>
main()
{
	//%fを使うときはfloat
	float f;
	printf("実数を入れて : ");
	scanf("%f", &f);
	
	printf("2倍すると %.2f \n", f*2.0);
	printf("3倍すると %.2f \n", f*3.0);
}