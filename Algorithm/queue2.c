#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIDTH 19 // ���H�̕�
#define HEIGHT 15 // ���H�̍���
main()
{
	int meiro[HEIGHT][WIDTH]; // ���H�f�[�^ 0�͒ʘH�A1�͕�
	int i, j;
	// ���H�̏�����(�O����S�ĕǂɂ���)
	for (i = 0; i < HEIGHT; i++) { // �s�����̌J�Ԃ�
		for (j = 0; j < WIDTH; j++) { // �񐔕��̌J�Ԃ�
			// �O����S�ĕǂɂ���
			if (i == 0 || j == 0 || i == HEIGHT - 1 || j == WIDTH - 1) {
				meiro[i][j] = 1;
			}
			else {
				meiro[i][j] = 0;
			}
		}
	}
	// �����_���ɕǂ�z�u���Ă���
	srand(time(0));
	for (i = 1; i < HEIGHT - 1; i++) {
		for (j = 1; j < WIDTH - 1; j++) {
			if (rand() % 2 == 0) { // 1/2�̊m���ŕǂ�u��
				meiro[i][j] = 1;
			}
		}
	}
	// ���H�\��
	for (i = 0; i < HEIGHT; i++) { // �s�����̌J�Ԃ�
		for (j = 0; j < WIDTH; j++) { // �񐔕��̌J�Ԃ�
			if (meiro[i][j] == 1) {
				printf("�l"); // ��:�����Ƃ��܂������Ȃ��̂Ŏl�ő�p
			}
			else {
				printf(" "); // �ʘH
			}
		}
		printf("\n");
	}
}