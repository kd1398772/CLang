#include<stdio.h>
main()
{
	printf("1�������\�� \n");
	int i;
	char data[]= "Apple";

	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}
	printf("\n�������\��\n");
	//printf("%s \n",&data[0]);//%s�̎���&���g���ăA�h���X���w��
	printf("%s \n",data);//�z�񖼂��������Ɛ擪�A�h���X��\��
}