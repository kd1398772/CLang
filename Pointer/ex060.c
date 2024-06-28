#include<stdio.h>
main()
{
	char data[] = "Language";
	char ch,*p_data;
	int i=0,j=0;

	p_data = data;
	
	printf("data[] = %s", p_data);

	printf("\nŒŸõ•¶š : ");
	scanf("%c", &ch);
	
	printf("ŒŸõŒ‹‰Ê‚Í");
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
		printf("•¶š–Ú‚Å‚·B\n");
	}
	else
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	
}