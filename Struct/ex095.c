#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };

	display1(a);		//�l�n��
	display2(syohin);	//�l�n��
}

//�֐���`
void display1(int a)
{
	printf(" a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name = %s   syohin.tanka = %d", syohin.name, syohin.tanka);
}

