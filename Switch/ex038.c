#include<stdio.h>
main()
{
	int D;
	printf("��������� : ");
	scanf("%d", &D);

	switch (D / 10)
	{
	case (1):
		printf("10�_��ł�");
			break;
	case (2):
		printf("20�_��ł�");
		break;
	case (3):
		printf("30�_��ł�");
		break;
	case (4):
		printf("40�_��ł�");
		break;
	default :
		printf("�G���[");
		break;
	}
}