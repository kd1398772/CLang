#include<stdio.h>
main()
{

	//変数の宣言
	int a = 100, b;

	//ポインタの宣言,int *までがデータ型、p_aが変数名
	int *p_a;

	//アドレスのセット
	// & : アドレス演算子 変数のアドレスを取り出す
	p_a = &a;
	
	// * : ポインタ演算子 アドレスの内容(変数の中身)を取り出す
	b = *p_a;

	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}