#include<stdio.h>
main()
{
	char kuni;

	printf("アルファベット (a,e,f,j) : ");
	scanf(" %c", &kuni);

	switch(kuni)
	{
	case ('a'):
		printf("America\nAustralia");
		break;
	case ('e'):
		printf("England");
		break;
	case('f'):
		printf("France");
		break;
	case('j'):
		printf("japan");
		break;
	default:
		printf("エラー");
		break;
	}
}