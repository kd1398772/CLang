#include <stdio.h>
main()
{
	char A,B;

	A = '5', B = '6';

	printf("%c �~ %c = %d\n", A, B, (A - '0') * (B - '0'));
}