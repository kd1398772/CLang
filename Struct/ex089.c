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
	
	printf("–¼‘O : ");
	scanf("%s", data.name);

	printf("¶”NŒ“ú‚ğ‹æØ‚Á‚Ä“ü—Í : ");
	scanf("%d%d%d",&data.birth[0],&data.birth[1],&data.birth[2]);

	printf("ŒŒ‰tŒ^‚ğ“ü—Í : ");
	scanf("%s", data.blood);

	printf(" \n%s [[ %d”N %dŒ%d“ú [[ ŒŒ‰tŒ^ %sŒ^",data.name, data.birth[0] , data.birth[1], data.birth[2],data.blood);
}