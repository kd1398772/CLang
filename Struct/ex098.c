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
	struct ken ken_data[] = { {1,"kCΉ",NULL},
							  {2,"ΒX§",NULL},
							  {3,"βθ§",NULL},
							  {4,"{ι§",NULL},
							  {5,"Hc§",NULL},
							  {6,"R`§",NULL},
							  {7,"§",NULL},
							  {DATA_END,"",NULL}};

	struct ken *p,*wp;//|C^2Β

	struct ken hyogo = { 28,"ΊΙ§",NULL };
	struct ken osaka = { 27,"εγ{",NULL };

	//NΜέθ
	p = wp = ken_data;//pΖwpΙζͺAhX
	do
	{
		p++;//κΒζΦ
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);


	//NΜ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}
	printf("\n");

	//kCΉΖΒX§ΜΤΙΊΙ§πΗΑ·ι.
	
	ken_data[0].next = &hyogo;//kCΉΜlNXgΙΊΙ§ΜAhXπZbg
	hyogo.next = &ken_data[1];//ΊΙ§ΜlNXgΙΒX§ΜAhXπZbg

	//§ΜγλΙεγ{
	ken_data[6].next = &osaka;//§ΜlNXgΙεγ{ΜAhXπZbg
	osaka.next = &ken_data[7];	  //εγ{ΜlNXgΙDATA_ENDπZbg


	//f[^}όγΜNΜ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s \n", p->code, p->name);

	}

}