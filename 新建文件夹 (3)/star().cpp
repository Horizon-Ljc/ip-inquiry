#include<stdio.h>
#include<stdlib.h>
#define size 586178
struct ip
{
	int a1,a2,a3,a4;
	int b1,b2,b3,b4;
	char country[20];
	char province[20];
	char city[20];
	char message[200];
};
struct ip line[size];
int main()
{
	FILE *fp;
	int i=1,j;
	fp=fopen("ip.txt","r");
	if(fp==NULL)
	{
		printf("error open!\n");
		return 1;	
	}//打开文件 
	
	while (fscanf(fp,"%d.%d.%d.%d|%d.%d.%d.%d|%s|0|%s|%s|%s\n",&line[i].a1,&line[i].a2,&line[i].a3,&line[i].a4,&line[i].b1,&line[i].b2,&line[i].b3,&line[i].b4,line[i].country,line[i].province,line[i].city,line[i].message)!= EOF)
	{
		i++;				
	}
	fclose(fp); 
	printf("起始地址  终止地址  国家  省份  城市  ISP\n");
	for(j=1;j<=1;j++)
	{
		printf("%d.%d.%d.%d|%d.%d.%d.%d|%s|0|%s|%s|%s\n",line[j].a1,line[j].a2,line[j].a3,line[j].a4,line[j].b1,line[j].b2,line[j].b3,line[j].b4,line[j].country,line[j].province,line[j].city,line[j].message);
	}

	return 0;
}
