#include<stdio.h>
main()
/* {
	int i;
	char data[] = "orange";

	for (i = 0; data[i] != '\0'; i++);
	printf("•¶š—ñ : %s\n", &data[0]);
	printf("•¶š”‚Í%d•¶š\n", i);
}*/
{
	int i;
	char data[80];

	printf("•¶š—ñ : ");
	scanf("%s", &data[80]);


	for (i = 0; data[i] != '\0'; i++);
	printf("•¶š”‚Í%d•¶š\n", i);
}