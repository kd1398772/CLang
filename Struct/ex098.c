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
	struct ken ken_data[] = { {1,"�k�C��",NULL},
							  {2,"�X��",NULL},
							  {3,"��茧",NULL},
							  {4,"�{�錧",NULL},
							  {5,"�H�c��",NULL},
							  {6,"�R�`��",NULL},
							  {7,"������",NULL},
							  {DATA_END,"",NULL}};

	struct ken *p,*wp;//�|�C���^2��

	struct ken hyogo = { 28,"���Ɍ�",NULL };
	struct ken osaka = { 27,"���{",NULL };

	//�����N�̐ݒ�
	p = wp = ken_data;//p��wp�ɐ擪�A�h���X
	do
	{
		p++;//����
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);


	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}
	printf("\n");

	//�k�C���ƐX���̊Ԃɕ��Ɍ���ǉ�����.
	
	ken_data[0].next = &hyogo;//�k�C���̃l�N�X�g�ɕ��Ɍ��̃A�h���X���Z�b�g
	hyogo.next = &ken_data[1];//���Ɍ��̃l�N�X�g�ɐX���̃A�h���X���Z�b�g

	//�������̌��ɑ��{
	ken_data[6].next = &osaka;//�������̃l�N�X�g�ɑ��{�̃A�h���X���Z�b�g
	osaka.next = &ken_data[7];	  //���{�̃l�N�X�g��DATA_END���Z�b�g


	//�f�[�^�}����̃����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}

}