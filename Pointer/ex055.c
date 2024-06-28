#include<stdio.h>
#define B_SIZE 4  //配列bのサイズ、配列に関する調整を楽にできる
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[B_SIZE] = { 11.1,22.2,33.3,44.4 };
	int i;
	int* p_a, a_sum;
	float* p_b, b_sum;


	//sizeofの練習		iが<24(aが6部屋*1部屋当たり4バイト)/4(int型は1部屋あたり4バイト)=6より小さい間継続
	for (a_sum = 0, p_a = a, i = 0; i < sizeof a / sizeof(int); i++, p_a++)
	{
		a_sum += *p_a;
	}
	printf("配列a  合計 = %7d \t 平均 = %6.3f\n", a_sum, (float)a_sum / (sizeof a / sizeof(int)));

	//#defineの練習
	for (b_sum = 0, p_b = b, i = 0; i <B_SIZE; i++, p_b++)
	{
		b_sum += *p_b;
	}
	printf("配列b 合計 = %7.3f \t 平均 = %6.3f\n", b_sum, b_sum / B_SIZE);
}