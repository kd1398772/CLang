#include<stdio.h>
#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken *next;
};

main()
{
	struct ken ken_data[] = { {1,"北海道",NULL},
							  {2,"青森県",NULL},
							  {3,"岩手県",NULL},
							  {4,"宮城県",NULL},
							  {5,"秋田県",NULL},
							  {6,"山形県",NULL},
							  {7,"福島県",NULL},
							  {DATA_END,"",NULL}};

	struct ken *p,*wp;//ポインタ2つ

	struct ken hyogo = { 28,"兵庫県",NULL };
	struct ken osaka = { 27,"大阪府",NULL };

	//リンクの設定
	p = wp = ken_data;//pとwpに先頭アドレス
	do
	{
		p++;//一つ先へ
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);


	//リンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}
	printf("\n");

	//北海道と青森県の間に兵庫県を追加する.
	
	ken_data[0].next = &hyogo;//北海道のネクストに兵庫県のアドレスをセット
	hyogo.next = &ken_data[1];//兵庫県のネクストに青森県のアドレスをセット

	//福島県の後ろに大阪府
	ken_data[6].next = &osaka;//福島県のネクストに大阪府のアドレスをセット
	osaka.next = &ken_data[7];	  //大阪府のネクストにDATA_ENDをセット


	//データ挿入後のリンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}

}