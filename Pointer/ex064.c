#include<stdio.h>
main()
{
	char * p_ride[] = { "car","bus","shinkansen" };
	char * p;

	for (int i = 0; i < sizeof(*p_ride)/sizeof(char); i++)
	{
		p = p_ride[i];//p��p_ride[i]�̐擪�A�h���X�������
		while (*p)
		{
			putchar(*p++);
		}
		putchar('\n');
	}
}