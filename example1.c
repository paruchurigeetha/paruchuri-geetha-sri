#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("d:\\geetha sri\\example1.txt","w");
	fprintf(fp,"%s","hello");
	fclose(fp);
}