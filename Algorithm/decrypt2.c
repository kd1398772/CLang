#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[20];
	char s[20];

	//�����̃��Z�b�g
	srand(time(0));
	rand();

	//�������z��s[]�ɃZ�b�g
	printf("���������� : ");
	scanf("%s", &s);

	//�Í����L�[��z��k[]�ɃZ�b�g
	for (i = 0; s[i] != '\0'; i++)
	{	
		//�����p�̃L�[
		printf("s[%d]�̈Í����L�[ : ", i);
		scanf("%d" ,&k[i]);
	}

	printf("�Í��������� : %s",s);
	printf("\n�Í����O�� :");
	for (int n = 0; n < i; n++)
	{
		printf(" %c", s[n]-k[n]);
	}
}