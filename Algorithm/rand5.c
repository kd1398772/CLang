#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;

	srand(time(0));
	rand();

	

	for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		kazu = rand() % 300 + 1;
		printf("%4d", kazu);
	}
}