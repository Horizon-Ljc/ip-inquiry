#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void split(char *src, const char *separator, char **dest, int *num) 
{
    /*
        src Դ�ַ������׵�ַ(buf�ĵ�ַ) 
        separator ָ���ķָ��ַ�
        dest �������ַ���������
        num �ָ�����ַ����ĸ���
    */
     char *pNext;
     int count = 0;
     
     if (src == NULL || strlen(src) == 0) //�������ĵ�ַΪ�ջ򳤶�Ϊ0��ֱ����ֹ 
        return;
        
     if (separator == NULL || strlen(separator) == 0) //��δָ���ָ���ַ�����ֱ����ֹ 
        return;
        
     pNext = (char *)strtok(src,separator); //����ʹ��(char *)����ǿ������ת��(��Ȼ��д�еı������в������ָ�����)
     while(pNext != NULL) {
          *dest++ = pNext;
          ++count;
         pNext = (char *)strtok(NULL,separator);  //����ʹ��(char *)����ǿ������ת��
    }  
    *num = count;
}

void easy()//���ļ��ж�ȡ����
{
	int begintime,endtime;//��ʱ 
	//char *filename = "ip.txt";
	char temp[256];
	char fileinput[256];
	FILE *fp = fopen("ip.txt","r");
	char input[256];
    //�������շ������ݵ����顣���������Ԫ��ֻҪ���õıȷָ������ַ���������ͺ��ˡ�
    
	char *revbuf[7] = {0}; //��ŷָ������ַ���
    int num = 0;//�ָ�����ַ����ĸ���

	char *revleftaddress[4] = {0}; //��ŷָ�����ip��ַ
	int leftnum = 0;

	char *revrightaddress[4] = {0}; //��ŷָ���βip��ַ
	int rightnum = 0;

	char *revinputaddress[4] = {0}; //��ŷָ��Ĳ��ҵ�ip��ַ
	int inputnum = 0;

	char *revtemp[4] = {0}; //��ŷָ��Ĳ��ҵ�ip��ַ
	int tempnum = 0;

	printf("������ip��ַ(��192.168.1.1):");
    scanf("%s",&input);
	split(input,".",revinputaddress,&inputnum); //���ú������зָ�
	if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255)
	{
		if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255)
		{
			if(atoi(revinputaddress[2]) >= 0 && atoi(revinputaddress[2]) <= 255)
			{
				if(atoi(revinputaddress[3]) >= 0 && atoi(revinputaddress[3]) <= 255)
				{
					begintime=clock();	//��ʱ��ʼ
					while (fscanf(fp,"%s\n",&fileinput)!= EOF)
					{
						strcpy(temp , fileinput);
						split(fileinput,"|",revbuf,&num); //���ú������зָ� 
						split(revbuf[0],".",revleftaddress,&leftnum); //���ú������зָ� 
						split(revbuf[1],".",revrightaddress,&rightnum); //���ú������зָ�
						if( (atoi(revinputaddress[0]) == atoi(revleftaddress[0])) && (atoi(revinputaddress[0]) == atoi(revrightaddress[0])))
						{
							if((atoi(revinputaddress[1]) >= atoi(revleftaddress[1])) && (atoi(revinputaddress[1]) <= atoi(revrightaddress[1])))
							{
								if((atoi(revinputaddress[2]) >= atoi(revleftaddress[2])) && (atoi(revinputaddress[2]) <= atoi(revrightaddress[2])))
								{
									if((atoi(revinputaddress[3]) >= atoi(revleftaddress[3])) && (atoi(revinputaddress[3]) <= atoi(revrightaddress[3])))
									{
										split(temp,"|",revtemp,&tempnum); //���ú������зָ� 
										printf("%s-%s %s %s %s %s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);
										break;
									}
								}
							}
						}
					}
					fclose(fp);
					endtime = clock();	//��ʱ����
					printf("query Time��%dms\n", endtime-begintime);
					return;
				}
			}
		}
	}
	printf("ip�������!\n");
}

void menu()
{
	printf("--------------��ip��ѯϵͳ��-------------\n");
	printf("\t\t0.�˳�ϵͳ\n");
	printf("\t\t1.����¼��ѯ\n");
	printf("\t\t2.��Χ��ѯ\n");
	printf("\t\t3.�����ѯ\n");
	printf("-------------------------------------------\n");
	printf("��ѡ��˵������루0-3����");
}

void keyDown()
{
	int userkey;
	scanf("%d",&userkey);
	switch (userkey)
	{
	case 0:
		printf("\t\t���˳�ϵͳ��\n");
		exit(0);
		break;
	case 1:
		printf("\t\t������¼��ѯ��\n");
		easy();
		break;
	case 2:
		printf("\t\t����Χ��ѯ��\n");

		break;
	case 3:
		printf("\t\t�������ѯ��\n");

		break;
	default:
		printf("�����������������!");
		break;
	}
}

void main()
{
	while (1)
	{
		menu();
		keyDown();
		system("pause");
		system("cls");
	}
}
