#include<stdio.h>
main()
{
	int max_score,score = 0;
	char ch;
	char max_name[20],name[20];
	FILE *fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("�ō����_ ���O : %s �X�R�A : %d\n", max_name, max_score);

	printf("�v���C���[�̖��O�� : ");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A : %d (Enter�ŃX�R�A+1�Ae�ŏI��\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		//�X�R�A���Z
		score++;
	}
	if (score > max_score)
	{
	//�t�@�C��score.txt�ւ̏�������
		//�@�t�@�C���̃I�[�v��
		fp = fopen("score.txt", "w");
		//�A�t�@�C���ւ�name��score�̏�������
		fprintf(fp, "%s\n%d\n", name, score);
		//�B�t�@�C���̃N���[�Y
		fclose(fp);
	}

		

}