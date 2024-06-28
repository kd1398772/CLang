#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIDTH 19 // 迷路の幅
#define HEIGHT 15 // 迷路の高さ
main()
{
	int meiro[HEIGHT][WIDTH]; // 迷路データ 0は通路、1は壁
	int i, j;
	// 迷路の初期化(外側を全て壁にする)
	for (i = 0; i < HEIGHT; i++) { // 行数分の繰返し
		for (j = 0; j < WIDTH; j++) { // 列数分の繰返し
			// 外側を全て壁にする
			if (i == 0 || j == 0 || i == HEIGHT - 1 || j == WIDTH - 1) {
				meiro[i][j] = 1;
			}
			else {
				meiro[i][j] = 0;
			}
		}
	}
	// ランダムに壁を配置していく
	srand(time(0));
	for (i = 1; i < HEIGHT - 1; i++) {
		for (j = 1; j < WIDTH - 1; j++) {
			if (rand() % 2 == 0) { // 1/2の確率で壁を置く
				meiro[i][j] = 1;
			}
		}
	}
	// 迷路表示
	for (i = 0; i < HEIGHT; i++) { // 行数分の繰返し
		for (j = 0; j < WIDTH; j++) { // 列数分の繰返し
			if (meiro[i][j] == 1) {
				printf("四"); // 壁:■だとうまく動かないので四で代用
			}
			else {
				printf(" "); // 通路
			}
		}
		printf("\n");
	}
}