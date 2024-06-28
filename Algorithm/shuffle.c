#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, target, work, data[20];

	srand(time(0));
	rand();
	
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	
	for (i = 0, target = 0, work = 0; i < 20; i++)
	{
		target = rand() % 20;
		work=data[i];
		data[i] = data[target];
		data[target] = work;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", data[i]);
	}
}