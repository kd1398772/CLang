#include<stdio.h>
main()
{
	int wa,su;
	for (wa = 0,su = 1;su <= 10; su++)
	{
		wa = wa+su;
		printf("1から%dまでの和 = %d \n", su, wa);
	}
}