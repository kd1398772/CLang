#include<stdio.h>
main()
{
	float f1, f2, f3;
	printf("������3���� : ");
	scanf("%f%f%f", &f1, &f2, &f3);

	printf("���v = %.2f \t", f1 + f2 + f3);
	printf("���� = %.2f", (f1 + f2 + f3) / 3);
}