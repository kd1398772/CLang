#include<stdio.h>
main()
{

	//�ϐ��̐錾
	int a = 100, b;

	//�|�C���^�̐錾,int *�܂ł��f�[�^�^�Ap_a���ϐ���
	int *p_a;

	//�A�h���X�̃Z�b�g
	// & : �A�h���X���Z�q �ϐ��̃A�h���X�����o��
	p_a = &a;
	
	// * : �|�C���^���Z�q �A�h���X�̓��e(�ϐ��̒��g)�����o��
	b = *p_a;

	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}