#include<stdio.h>
#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken *next;
};

main()
{
	struct ken ken_data[] = { {1,"kCš",NULL},
							  {2,"ÂX§",NULL},
							  {3,"âč§",NULL},
							  {4,"{é§",NULL},
							  {5,"Hc§",NULL},
							  {6,"R`§",NULL},
							  {7,"§",NULL},
							  {DATA_END,"",NULL}};

	struct ken *p,*wp;//|C^2Â

	//NĚÝč
	p = wp = ken_data;//pĆwpÉćŞAhX
	do
	{
		p++;//ęÂćÖ
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);


	//NĚ\Ś
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}
}