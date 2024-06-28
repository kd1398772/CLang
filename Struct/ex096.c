//ex096.c
//アドレス渡し
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
	struct syohin_data syohin = { "ケシゴム",50 };

	display1(a);		//値渡し
	display2(syohin);	//値渡し
	display3(&syohin);   //アドレス(&)渡し

	//書き変わったか確認
	display2(syohin);
}

//関数定義
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

	//アドレスを受け取っているので書き換えも可能
	//単価を100にしてみる

	strcpy(p->name, "値上げケシゴム");
	p->tanka = 100;
}
