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
	
	printf("名前 : ");
	scanf("%s", data.name);

	printf("生年月日を区切って入力 : ");
	scanf("%d%d%d",&data.birth[0],&data.birth[1],&data.birth[2]);

	printf("血液型を入力 : ");
	scanf("%s", data.blood);

	printf(" \n%s ーー %d年 %d月%d日 ーー 血液型 %s型",data.name, data.birth[0] , data.birth[1], data.birth[2],data.blood);
}