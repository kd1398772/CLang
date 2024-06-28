#include<stdio.h>
main()
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "ƒqƒmƒL‚Ì–_\n");
	fprintf(fp, "“º‚ÌŒ•@|‚ÌŒ•\n");
	fprintf(fp, "1 10 “º‚ÌŒ•");
	fclose(fp);
}