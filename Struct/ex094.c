#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[5];
	struct profile *p;
	p = data;

	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("%d�l��	���O : ",i);
		scanf("%s", p->name);

		printf("%d�l��	���N��������؂��ē��� : ",i);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);

		printf("%d�l��	���t�^����� : ",i);
		scanf("%s", p->blood);
		printf("\n");

		p++;
	}
	p = data;
	for (i = 0; i < 5; i++)
	{
		if (strcmp(p->blood,"A") == 0)
		{
			printf("\n % s �[�[ % d�N % d�� % d�� �[�[ ���t�^ %s�^", p->name, p->birth[0] , p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}