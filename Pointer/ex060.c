#include<stdio.h>
main()
{
	char data[] = "Language";
	char ch,*p_data;
	int i=0,j=0;

	p_data = data;
	
	printf("data[] = %s", p_data);

	printf("\n�������� : ");
	scanf("%c", &ch);
	
	printf("�������ʂ�");
	for (i = 0; *(p_data + i) != '\0'; i++)		//*(p_data + i) <= *p_data
	{
		if (ch == *(p_data + i))				//*(p_data + i) <= +p_data++
		{
			printf(" %d ", i + 1);
			j++;
			
		}

	}
	if (j > 0)
	{
		printf("�����ڂł��B\n");
	}
	else
	{
		printf("������܂���ł���\n");
	}
	
}