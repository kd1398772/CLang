#include<stdio.h>
main()
{
	int ia, ib;
	printf("二つの整数 :  ");
	scanf("%d%d", &ia, &ib);

	printf("%d+%d=%d", ia, ib, ia + ib);
	printf("%d-%d=%d", ia, ib, ia - ib);
	printf("%d*%d=%d", ia, ib, ia * ib);
	printf("%d/%d=%dあまり%d", ia, ib, ia / ib,ia%ib);
}