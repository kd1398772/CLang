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
		printf("%d人目	名前 : ",i);
		scanf("%s", p->name);

		printf("%d人目	生年月日を区切って入力 : ",i);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);

		printf("%d人目	血液型を入力 : ",i);
		scanf("%s", p->blood);
		printf("\n");

		p++;
	}
	p = data;
	for (i = 0; i < 5; i++)
	{
		if (strcmp(p->blood,"A") == 0)
		{
			printf("\n % s ーー % d年 % d月 % d日 ーー 血液型 %s型", p->name, p->birth[0] , p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}