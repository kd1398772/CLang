#include<stdio.h>
main()
{
	//%f���g���Ƃ���float
	float f;
	printf("���������� : ");
	scanf("%f", &f);
	
	printf("2�{����� %.2f \n", f*2.0);
	printf("3�{����� %.2f \n", f*3.0);
}