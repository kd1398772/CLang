#include<stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;//�߂�l�p

	printf("���� : ");
	ret = scanf("%d", &data);

	while (ret != EOF)
	{
		sum += data;
		cnt++;
		printf("���� : ");
		ret = scanf("%d", &data);

	}

	printf("���v = %d ���� = %.2f ", sum, (float) sum / cnt);
}