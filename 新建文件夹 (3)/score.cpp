#include<stdio.h>
#include<stdlib.h>
#define BUFSIZE 1000
struct book
{
	char name[20];
	int chinese;
	int math;
	int English;
};
int main()
{
	FILE *fp;
	int i=1,j,r_n=0;
	char buf[BUFSIZE],c;
	fp=fopen("score.txt","r");
	if(fp==NULL)
	{
		printf("error open!\n");
		return 1;	
	}//���ļ� 
	struct book line[20];
	while (fscanf(fp,"%s %d %d %d\n",&line[i].name,&line[i].chinese,&line[i].math,&line[i].English)!= EOF)
					{
						i++;				
					}

					fclose(fp); 
	for(j=1;j<=i-1;j++)
	{
		printf("����:%s ����:%d ��ѧ:%d Ӣ��:%d\n",line[j].name,line[j].chinese,line[j].math,line[j].English);
	}

	return 0;
}

