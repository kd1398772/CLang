#include<stdio.h>
#include<string.h>
#define CNT 4

main()
{
	char* p_tb[] = { "Programming2","Algorithm","Programming1","C" },p,*w;
	int i, j;

	for (i = 0; i < CNT-1; i++)
	{
		for (j = i + 1; j < CNT; j++)
		{
			if( strcmp(p_tb[i],p_tb[j])<0)
			{
				w = p_tb[i];
				p_tb[i] = p_tb[j];
				p_tb[j] = w;
			}
		}
	}
	for (i = 0; i < CNT; i++)
	{
		printf("%s\n", p_tb[i]);
	}
}