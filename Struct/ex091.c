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
	struct profile data;
	struct profile *p;
	p = &data;
	
		printf("名前 : ");
		scanf("%s",p->name);

		printf("生年月日を区切って入力 : ");
		scanf("%d%d%d",&p->birth[0], &p->birth[1], &p->birth[2]);

		printf("血液型を入力 : ");
		scanf("%s", p->blood);

	printf(" \n%s ーー %d年 %d月%d日 ーー 血液型 %s型", p->name, p->birth[0] , p->birth[1], p->birth[2], p->blood);
}