//ex096.c
//�A�h���X�n��
#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };

	display1(a);		//�l�n��
	display2(syohin);	//�l�n��
	display3(&syohin);   //�A�h���X(&)�n��

	//�����ς�������m�F
	display2(syohin);
}

//�֐���`
void display1(int a)
{
	printf(" a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name = %s   syohin.tanka = %d\n", syohin.name, syohin.tanka);
}

void display3(struct syohin_data* p)
{
	printf("p->name = %s   p->tanka = %d\n", p->name, p->tanka);

	//�A�h���X���󂯎���Ă���̂ŏ����������\
	//�P����100�ɂ��Ă݂�

	strcpy(p->name, "�l�グ�P�V�S��");
	p->tanka = 100;
}
