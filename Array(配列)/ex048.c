#include<stdio.h>
main()
{
	//1フロアに3部屋ある2階建てのアパートが2つある
	int a[2][2][3] = { {{3,4,5},{4,5,6}},
					  {{ 2,2,3 },{2,5,6}}};
	int i, j, k,sum;

	//アパートの処理
	for (i = 0, sum = 0; i < 2; i++)
	{
		printf("アパート%d  ", i + 1);

		//階数の処理
		for (j = 0; j < 2; j++)
		{
			printf("%d階 : ",j + 1);
			
			//部屋の数と住んでいる人の数の処理
			for (k = 0; k < 3; k++)
			{
				printf("%d ", a[i][j][k]);
				sum += a[i][j][k];
			}
			
		}
		printf("\n");
	}
	printf("\n全体で%d人住んでいます。\n", sum);

}