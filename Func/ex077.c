#include<stdio.h>
void ire(int i, int j, int k, int *max, int *min);

main()
{
	int a,b,c,max,min;
	

	printf("®”‚ð3‚Â“ü—Í : ");
	scanf("%d%d%d", &a,&b,&c);

	ire(a,b,c,&max,&min);
	
	printf("Å‘å’l = %d Å¬’l = %d", max,min);
}

void ire(int i, int j, int k,int *max,int *min)
{
	*max = (i > j) ? (i > k ? i : k) : (j > k ? j : k);
	*min = (i < j) ? (i < k ? i : k) : (j < k ? j : k);
}