#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data,data2;//入力用

	c = scanf("%c%c",&data,&data2);//入力

	while (c != EOF)//データの終わり
		//データの入力完了 ctrl+z
	{
		printf("%d", c);
		putchar('\n');
		gets(dumy);		//入力バッファのクリア
		c = scanf("%c%c", &data, &data2);
	}
	printf(" %d \n", printf("HELLO"));		//5が表示される
	printf(" %d \n",printf("こんにちは"));	//10が表示される
}