#include<stdio.h>
main()
{
	int a = 100;
	int *p_a;

	p_a = &a;

	printf("a = %d &a = %p\n", a, &a);
	//1:p_a�Ɏ��[���ꂽa�̃A�h���X 2:a�̒��g 3:p_a�̃A�h���X  
	printf("p_a = %p *p_a = %d &p_a = %p\n", p_a, *p_a, &p_a);
}