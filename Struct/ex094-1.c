#include<stdio.h>

struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile data[5] = {{"hiroki",{2000,12,11},"A"},
							  {"kanami",{1999,2,12},"B"},
							  {"runa",{2003,8,23},"A"},
							  {"kazuma",{1920,2,5},"B"},
							  {"ema",{2001,5,5},"O"} };
	struct profile* p = data;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)//p->birth‚Åprofile‚Ì’†‚Ìbirth‚ðŒ©‚é
		{
			printf("%s--", p->name);
			printf("%d”N %2dŒŽ %2d“ú", p->birth.nen, p->birth.tuki, p->birth.hi);
			printf("ŒŒ‰tŒ^ %sŒ^\n", p->blood);
		}
		p++;
	}


}