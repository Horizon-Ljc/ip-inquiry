#include<stdio.h>
#include<stdlib.h>
#define size 586178
struct ip
{
	int a1,a2,a3,a4;
	int b1,b2,b3,b4;
	char country[200];
	char province[20];
	char city[200];
	char message[200];
};
struct ip line[size];
int main()
{
	FILE *fp;
	int i=1;
	fp=fopen("ip.txt","r");
	if(fp==NULL)
	{
		printf("error open!\n");
		return 1;
	}//打开文件

	while (fscanf(fp,"%d.%d.%d.%d|%d.%d.%d.%d|%s\n",&line[i].a1,&line[i].a2,&line[i].a3,&line[i].a4,&line[i].b1,&line[i].b2,&line[i].b3,&line[i].b4,line[i].country)!= EOF)
	{
        printf("%s %s",line[i].city,line[i].message);
	}
	fclose(fp);


	return 0;
}
