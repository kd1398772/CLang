#include<stdio.h>
main()
{
	int data, sum = 0,cnt=0;
	int ret;

	printf("����(^Z�ŏI��)? ");
	ret = scanf("%d", &data);

	while (ret != EOF)
	{
		sum += data;
		cnt++;
		printf("����(^Z�ŏI��)? ");
		ret = scanf("%d", &data);

	}

	printf("���v = %d ���� = %.2f ", sum, (float)sum / cnt);
}