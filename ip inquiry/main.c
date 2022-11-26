#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <windows.h>
char ip[600000][256];

int no=1;//��ֹ���з�Χ��ѯʱeasy_srarch��ǰ���

int pos;//��¼��Χ��ѯ�ĳ�ĩλ�ã�ip�����±꣩

int yes=1;//��Χ��ѯʱ��¼ip��ַ�����������

void store()//���ļ���Ϣ��������ip
{
    int i=0;
    char *filename = "ip.txt";

    FILE *fp = fopen(filename,"r");

    while(fscanf(fp,"%s\n",ip[i])!=EOF)
    {
        i++;
    }
    fclose(fp);
}

void split(char *src, const char *separator, char **dest, int *num)//�ַ��ָ��
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

    pNext = (char *)strtok(src,separator); //ʹ��(char *)����ǿ������ת��(�������ָ�����)
    while(pNext != NULL)
    {
        *dest++ = pNext;
        ++count;
        pNext = (char *)strtok(NULL,separator);  //ʹ��(char *)����ǿ������ת��
    }
    *num = count;
}

int isInt(char str[256])//�ж��ַ����Ƿ�Ϊȫint������
{
    int t1;
    char temp[256];
    t1 = atoi(str);
    itoa(t1,temp,10);
    if(strcmp(str,temp) != 0)
    {
        return 1;//���Ƿ���1
    }
    else
    {
        return 0;//�Ƿ���0
    }
}

void easy_search(char input[])//���ļ��ж�ȡ����
{
    int begintime,endtime;//��ʼʱ��
    store();

    int left=0,right=586176;
    int mid=(left+right)/2;

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
    split(input,".",revinputaddress,&inputnum); //���ú������зָ�
    if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255 && isInt(revinputaddress[0]) == 0)
    {
        if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255 && isInt(revinputaddress[1]) == 0)
        {
            if(atoi(revinputaddress[2]) >= 0 && atoi(revinputaddress[2]) <= 255 && isInt(revinputaddress[2]) == 0)
            {
                if(atoi(revinputaddress[3]) >= 0 && atoi(revinputaddress[3]) <= 255 && isInt(revinputaddress[3]) == 0)
                {
                    begintime = clock();	//��ʱ��ʼ
                    while (1)//���ж��ֲ���
                    {
                        char temp[256]= {0};
                        strcpy(temp,ip[mid]);
                        char savedata[256]= {0};
                        strcpy(savedata, ip[mid]);
                        split(ip[mid],"|",revbuf,&num); //���ú������зָ�
                        split(revbuf[0],".",revleftaddress,&leftnum); //���ú������зָ�
                        split(revbuf[1],".",revrightaddress,&rightnum); //���ú������зָ�
                        if( (atoi(revinputaddress[0]) <atoi(revleftaddress[0])) )
                        {
                            right=mid-1;
                            mid=(left+right)/2;
                            continue;
                        }
                        else if((atoi(revinputaddress[0]) >atoi(revrightaddress[0])))
                        {
                            left=mid+1;
                            mid=(left+right)/2;
                            continue;
                        }
                        else
                        {
                            if( (atoi(revinputaddress[1]) <atoi(revleftaddress[1])) )
                            {
                                right=mid-1;
                                mid=(left+right)/2;
                                continue;
                            }
                            else if((atoi(revinputaddress[1]) >atoi(revrightaddress[1])))
                            {
                                left=mid+1;
                                mid=(left+right)/2;
                                continue;
                            }
                            else if(atoi(revrightaddress[1])!=atoi(revleftaddress[1]))
                            {
                                split(temp,"|",revtemp,&tempnum); //���ú������зָ�
                                pos=mid;
                                if(no)//no=0ʱΪrange_search���õ�ʱ����Ҫ���
                                {
                                    printf("\n===========��ѯ��Ϣ===========\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("        ��ʼ��ַ        ������ַ         ����              ʡ��              ����\t\t\t\tISP\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("%16s%16s%13s%18s%17s%33s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);//16 16 13 20 17 35
                                    endtime = clock();	//��ʱ����
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("��ѯʱ�䣺%dms\n", endtime-begintime);
                                    printf("��Ҫ�����ļ��밴T,����F\n");
                                    char ipq[2];
                                    scanf("%s",ipq);
                                    if(ipq[0]=='T')
                                    {
                                        printf("�����뱣����ļ����磨1.txt��:");
                                        char filename[20];
                                        scanf("%s",filename);

                                        FILE *fp2 = fopen(filename, "w");
                                        fprintf(fp2,"%s\n", savedata);
                                        printf("����ɹ�\n");
                                        fclose(fp2);
                                    }
                                }
                                break;
                            }
                            else
                            {
                                if( (atoi(revinputaddress[2]) <atoi(revleftaddress[2])) )
                                {
                                    right=mid-1;
                                    mid=(left+right)/2;
                                    continue;
                                }
                                else if((atoi(revinputaddress[2]) >atoi(revrightaddress[2])))
                                {
                                    left=mid+1;
                                    mid=(left+right)/2;
                                    continue;
                                }
                                else
                                {
                                    split(temp,"|",revtemp,&tempnum); //���ú������зָ�
                                    pos=mid;
                                    if(no)//no=0ʱΪrange_search���õ�ʱ����Ҫ���
                                    {
                                        printf("\n===========��ѯ��Ϣ===========\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("        ��ʼ��ַ        ������ַ         ����              ʡ��              ����\t\t\t\tISP\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("%16s%16s%13s%18s%17s%33s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);//16 16 13 18 17 33
                                        endtime = clock();	//��ʱ����
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("��ѯʱ�䣺%dms\n", endtime-begintime);
                                        printf("��Ҫ�����ļ��밴T������F\n");
                                        char ipq[2];
                                        scanf("%s",ipq);
                                        if(ipq[0]=='T')
                                        {
                                            printf("�����뱣����ļ����磨1.txt��:");
                                            char filename[20];
                                            scanf("%s",filename);
                                            FILE *fp2 = fopen(filename, "w");
                                            fprintf(fp2,"%s\n", savedata);
                                            printf("����ɹ�\n");
                                            fclose(fp2);
                                        }
                                    }
                                    break;
                                }
                            }
                        }

                    }


                    return;
                }
            }
        }
    }
    printf("ip�������!\n");
    yes=0;//��¼ip���������������range_search�����
    return ;
}

void range_search()//���ļ��ж�ȡ����
{
    no=0;
    yes=1;

    int begintime,endtime;

    int j;//������������ı���

    int start=0,quit=0;//��¼��ѯ��Χ�ĳ�ĩλ�ã������±꣩
    int number;

    char *revbuf[7] = {0}; //��ŷָ������ַ���


    char input[256];

    char *revinputaddress[2] = {0}; //��ŷָ��Ĳ��ҵ�ip��ַ
    int inputnum = 0;

    int tempnum=0;


    printf("������ip��ַ(��219.235.224.1-219.236.1.1):");
    scanf("%s",input);

    split(input,"-",revinputaddress,&inputnum); //���ú������зָ�
    begintime = clock();	//��ʱ��ʼ
    easy_search(revinputaddress[0]);
    start=pos;
    if(yes)
    {
        easy_search(revinputaddress[1]);
        quit=pos;
        number=quit-start+1;
        endtime = clock();	//��ʱ����
        store();
        if(yes)
        {
            printf("��������%d ҳ����%d(һҳһ��������)\n", number,number/100+1);
            printf("��ѯʱ�䣺%dms\n", endtime-begintime);
            printf("������Ҫ��ѯ��ҳ����1-%d��,����0��ʾ����:",number/100+1);
            while(1)
            {
                int page;
                scanf("%d",&page);
                if(page)
                {
                    printf("\n===========��ѯ��Ϣ===========\n");
                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                    printf("        ��ʼ��ַ        ������ַ         ����              ʡ��              ����\t\t\t\tISP\n");
                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                    if(start+page*99>=quit)
                    {
                        for(j=start; j<=quit; j++)
                        {
                            char temp[256]= {0};
                            strcpy(temp,ip[j]);
                            split(temp,"|",revbuf,&tempnum); //���ú������зָ�
                            printf("%16s%16s%13s%20s%17s%35s\n",revbuf[0],revbuf[1],revbuf[2],revbuf[4],revbuf[5],revbuf[6]);//16 16 13 18 17 33
                            printf("-----------------------------------------------------------------------------------------------------------------------\n");

                        }

                    }
                    else
                    {
                        for(j=start; j<=(start+page*99); j++)
                        {
                            char temp[256]= {0};
                            strcpy(temp,ip[j]);
                            split(temp,"|",revbuf,&tempnum); //���ú������зָ�
                            printf("%16s%16s%13s%20s%17s%35s\n",revbuf[0],revbuf[1],revbuf[2],revbuf[4],revbuf[5],revbuf[6]);//16 16 13 18 17 33
                            printf("-----------------------------------------------------------------------------------------------------------------------\n");

                        }

                    }

                    printf("��Ҫ�����ļ��밴T������F\n");
                    char ipq[2];
                    scanf("%s",ipq);
                    if(ipq[0]=='T')
                    {
                        printf("�����뱣����ļ����磨1.txt��:");
                        char filename[20];
                        scanf("%s",filename);
                        FILE *fp2 = fopen(filename, "w");
                        for(j=start; j<=quit; j++)
                        {
                            fprintf(fp2,"%s\n", ip[j]);
                        }
                        printf("����ɹ�\n");
                        fclose(fp2);
                    }
                    no=1;
                    printf("������Ҫ��ѯ��ҳ����1-%d��,����0��ʾ����:",number/100+1);
                }
                else
                    return;
            }
        }

    }
    else
        return ;



}

struct data
{
    char start_add[256];
    char end_add[256];
    char nation[256];
    char area[256];
    char province[256];
    char city[256];
    char ISP[256];
} tempdata[100000];
int n = 0;

void sort(char str[])
{
    char *revtemp[7] = {0}; //��ŷָ������ַ���
    int num = 0;//�ָ�����ַ����ĸ���
    split(str,"|",revtemp,&num); //���ú������зָ�
    strcpy(tempdata[n].start_add	,revtemp[0]);
    strcpy(tempdata[n].end_add		,revtemp[1]);
    strcpy(tempdata[n].nation		,revtemp[2]);
    strcpy(tempdata[n].area			,revtemp[3]);
    strcpy(tempdata[n].province		,revtemp[4]);
    strcpy(tempdata[n].city			,revtemp[5]);
    strcpy(tempdata[n].ISP			,revtemp[6]);
}

void output()
{
    struct data tmp;
    int i,j;
    /***************��ʡ��ð������*******************/
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(tempdata[j].province > tempdata[j+1].province)
            {
                tmp = tempdata[j];
                tempdata[j] = tempdata[j+1];
                tempdata[j+1] = tmp;
            }
        }
    }
    printf("\n===========��ѯ��Ϣ===========\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("        ��ʼ��ַ        ������ַ         ����              ʡ��              ����\t\t\t\tISP\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("%16s%16s%13s%18s%17s%33s\n",tempdata[i].start_add,tempdata[i].end_add,tempdata[i].nation,tempdata[i].province,tempdata[i].city,tempdata[i].ISP);//16 16 13 18 17 33
        printf("-----------------------------------------------------------------------------------------------------------------------\n");
    }

}

void public_search(char input[])//���ļ��ж�ȡ����
{
    char *filename = "ip.txt";
    char temp[256];
    char fileinput[256];
    FILE *fp = fopen(filename,"r");

    //�������շ������ݵ����顣���������Ԫ��ֻҪ���õıȷָ������ַ���������ͺ��ˡ�

    char *revbuf[7] = {0}; //��ŷָ������ַ���
    int num = 0;//�ָ�����ַ����ĸ���

    char *revleftaddress[4] = {0}; //��ŷָ�����ip��ַ
    int leftnum = 0;

    char *revrightaddress[4] = {0}; //��ŷָ���βip��ַ
    int rightnum = 0;

    char *revinputaddress[4] = {0}; //��ŷָ��Ĳ��ҵ�ip��ַ
    int inputnum = 0;

    split(input,".",revinputaddress,&inputnum); //���ú������зָ�
    if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255 && isInt(revinputaddress[0]) == 0)
    {
        if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255 && isInt(revinputaddress[1]) == 0)
        {
            if(atoi(revinputaddress[2]) >= 0 && atoi(revinputaddress[2]) <= 255 && isInt(revinputaddress[2]) == 0)
            {
                if(atoi(revinputaddress[3]) >= 0 && atoi(revinputaddress[3]) <= 255 && isInt(revinputaddress[3]) == 0)
                {
                    n=0;

                    while (fscanf(fp,"%s\n",fileinput)!= EOF)
                    {
                        strcpy(temp, fileinput);
                        char temp2[256]= {0};
                        strcpy(temp2, fileinput);
                        split(fileinput,"|",revbuf,&num); //���ú������зָ�
                        split(revbuf[0],".",revleftaddress,&leftnum); //���ú������зָ�
                        split(revbuf[1],".",revrightaddress,&rightnum); //���ú������зָ�
                        if( (atoi(revinputaddress[0]) >= atoi(revleftaddress[0])) && (atoi(revinputaddress[0]) <= atoi(revrightaddress[0])))
                        {
                            if((atoi(revinputaddress[1]) >= atoi(revleftaddress[1])) && (atoi(revinputaddress[1]) <= atoi(revrightaddress[1])))
                            {
                                if((atoi(revinputaddress[2]) >= atoi(revleftaddress[2])) && (atoi(revinputaddress[2]) <= atoi(revrightaddress[2])))
                                {
                                    if((atoi(revinputaddress[3]) >= atoi(revleftaddress[3])) && (atoi(revinputaddress[3]) <= atoi(revrightaddress[3])))
                                    {
                                        sort(temp);
                                        n++;


                                        goto a;
                                    }
                                }
                            }
                        }
                    }
a:
                    output();


                    fclose(fp);

                    return;
                }
            }
        }
    }
    printf("ip�������!\n");
}

void team_search(char str[])//���ļ��ж�ȡ����
{
    int i;
    char *revbuf[100] = {0}; //��ŷָ������ַ���
    int num = 0;//�ָ�����ַ����ĸ���
    split(str," ",revbuf,&num); //���ú������зָ�

    for(i=0; i<num; i++)
    {
        public_search(revbuf[i]);
    }

}

void vague_search(char input[])//���ļ��ж�ȡ����
{
    int begintime,endtime;

    int w=0;

    char *filename = "ip.txt";
    char temp[256];
    char fileinput[256];
    FILE *fp = fopen(filename,"r");

    //�������շ������ݵ����顣���������Ԫ��ֻҪ���õıȷָ������ַ���������ͺ��ˡ�
    char *revbuf[7] = {0}; //��ŷָ������ַ���
    int num = 0;//�ָ�����ַ����ĸ���

    char *revleftaddress[4] = {0}; //��ŷָ�����ip��ַ
    int leftnum = 0;

    char *revrightaddress[4] = {0}; //��ŷָ���βip��ַ
    int rightnum = 0;

    char *revinputaddress[4] = {0}; //��ŷָ��Ĳ��ҵ�ip��ַ
    int inputnum = 0;


    split(input,".",revinputaddress,&inputnum); //���ú������зָ�
    if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255 && isInt(revinputaddress[0]) == 0)
    {
        if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255 && isInt(revinputaddress[1]) == 0)
        {
            if(strcmp(revinputaddress[2], "*")==0)
            {
                if(strcmp(revinputaddress[3], "*")==0)
                {

                    n=0;
                    begintime = clock();	//��ʱ��ʼ
                    while (fscanf(fp,"%s\n",fileinput)!= EOF)
                    {
                        strcpy(temp, fileinput);

                        split(fileinput,"|",revbuf,&num); //���ú������зָ�
                        split(revbuf[0],".",revleftaddress,&leftnum); //���ú������зָ�
                        split(revbuf[1],".",revrightaddress,&rightnum); //���ú������зָ�

                        if( (atoi(revinputaddress[0]) >= atoi(revleftaddress[0])) && (atoi(revinputaddress[0]) <= atoi(revrightaddress[0])))
                        {
                            if((atoi(revinputaddress[1]) >= atoi(revleftaddress[1])) && (atoi(revinputaddress[1]) <= atoi(revrightaddress[1])))
                            {
                                sort(temp);
                                n++;
                                w++;
                            }
                        }
                    }
                    endtime = clock();	//��ʱ����
                    output();
                    fclose(fp);
                    printf("��������%d\n",w);
                    printf("��ѯʱ�䣺%dms\n", endtime-begintime);

                    return;

                }
            }
        }
    }
    printf("ip�������!\n");
}

void file_search(char str[])//���ļ��ж�ȡ����
{
    int begintime,endtime;

    int w=0;

    char temp5[256];
    FILE *fp = fopen(str,"r");
    if (fp==NULL)
    {
        printf("�ļ�������\n");
        fclose(fp);
        return;
    }
    else
    {
        printf("��Ҫ�����ѯ���Ϊ�ļ��밴T,����F\n");
        char ipq[2];
        scanf("%s",ipq);
        printf("\n===========��ѯ��Ϣ===========\n");
        printf("-----------------------------------------------------------------------------------------------------------------------\n");
        printf("        ��ʼ��ַ        ������ַ         ����              ʡ��              ����\t\t\t\tISP\n");
        printf("-----------------------------------------------------------------------------------------------------------------------\n");
        if(ipq[0]=='T')
        {
            printf("�����뱣����ļ����磨1.txt��:");
            char filename[20];
            scanf("%s",filename);

            FILE *fp2 = fopen(filename, "w");
            begintime = clock();	//��ʱ��ʼ

            while (fscanf(fp,"%s\n",temp5)!= EOF)
            {

                store();

                int left=0,right=586176;
                int mid=(left+right)/2;

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
                split(temp5,".",revinputaddress,&inputnum); //���ú������зָ�
                if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255 && isInt(revinputaddress[0]) == 0)
                {
                    if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255 && isInt(revinputaddress[1]) == 0)
                    {
                        if(atoi(revinputaddress[2]) >= 0 && atoi(revinputaddress[2]) <= 255 && isInt(revinputaddress[2]) == 0)
                        {
                            if(atoi(revinputaddress[3]) >= 0 && atoi(revinputaddress[3]) <= 255 && isInt(revinputaddress[3]) == 0)
                            {

                                while (1)
                                {
                                    char temp[256]= {0};
                                    strcpy(temp,ip[mid]);
                                    char savedata[256]= {0};
                                    strcpy(savedata, ip[mid]);
                                    split(ip[mid],"|",revbuf,&num); //���ú������зָ�
                                    split(revbuf[0],".",revleftaddress,&leftnum); //���ú������зָ�
                                    split(revbuf[1],".",revrightaddress,&rightnum); //���ú������зָ�
                                    if( (atoi(revinputaddress[0]) <atoi(revleftaddress[0])) )
                                    {
                                        right=mid-1;
                                        mid=(left+right)/2;
                                        continue;
                                    }
                                    else if((atoi(revinputaddress[0]) >atoi(revrightaddress[0])))
                                    {
                                        left=mid+1;
                                        mid=(left+right)/2;
                                        continue;
                                    }
                                    else
                                    {
                                        if( (atoi(revinputaddress[1]) <atoi(revleftaddress[1])) )
                                        {
                                            right=mid-1;
                                            mid=(left+right)/2;
                                            continue;
                                        }
                                        else if((atoi(revinputaddress[1]) >atoi(revrightaddress[1])))
                                        {
                                            left=mid+1;
                                            mid=(left+right)/2;
                                            continue;
                                        }
                                        else if(atoi(revrightaddress[1])!=atoi(revleftaddress[1]))
                                        {
                                            split(temp,"|",revtemp,&tempnum); //���ú������зָ�
                                            printf("%16s%16s%13s%18s%17s%33s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);//16 16 13 18 17 33
                                            fprintf(fp2,"%s\n", savedata);
                                            w++;
                                            printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                            break;
                                        }
                                        else
                                        {
                                            if( (atoi(revinputaddress[2]) <atoi(revleftaddress[2])) )
                                            {
                                                right=mid-1;
                                                mid=(left+right)/2;
                                                continue;
                                            }
                                            else if((atoi(revinputaddress[2]) >atoi(revrightaddress[2])))
                                            {
                                                left=mid+1;
                                                mid=(left+right)/2;
                                                continue;
                                            }
                                            else
                                            {
                                                split(temp,"|",revtemp,&tempnum); //���ú������зָ�
                                                printf("%16s%16s%13s%18s%17s%33s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);//16 16 13 18 17 33
                                                fprintf(fp2,"%s\n", savedata);
                                                w++;
                                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                                break;
                                            }
                                        }
                                    }

                                }
                                goto out;



                            }
                        }
                    }
                }
                printf("ip�������!\n");
            }
out:
            fclose(fp);
            endtime = clock();	//��ʱ����
            printf("��������%d\n",w);
            printf("��ѯʱ�䣺%dms\n", endtime-begintime);


            printf("����ɹ�\n");
            fclose(fp2);
        }
        else
        {

            begintime = clock();	//��ʱ��ʼ
            while (fscanf(fp,"%s\n",temp5)!= EOF)
            {

                store();

                int left=0,right=586176;
                int mid=(left+right)/2;

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
                split(temp5,".",revinputaddress,&inputnum); //���ú������зָ�
                if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255 && isInt(revinputaddress[0]) == 0)
                {
                    if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255 && isInt(revinputaddress[1]) == 0)
                    {
                        if(atoi(revinputaddress[2]) >= 0 && atoi(revinputaddress[2]) <= 255 && isInt(revinputaddress[2]) == 0)
                        {
                            if(atoi(revinputaddress[3]) >= 0 && atoi(revinputaddress[3]) <= 255 && isInt(revinputaddress[3]) == 0)
                            {

                                while (1)
                                {
                                    char temp[256]= {0};
                                    strcpy(temp,ip[mid]);
                                    split(ip[mid],"|",revbuf,&num); //���ú������зָ�
                                    split(revbuf[0],".",revleftaddress,&leftnum); //���ú������зָ�
                                    split(revbuf[1],".",revrightaddress,&rightnum); //���ú������зָ�
                                    if( (atoi(revinputaddress[0]) <atoi(revleftaddress[0])) )
                                    {
                                        right=mid-1;
                                        mid=(left+right)/2;
                                        continue;
                                    }
                                    else if((atoi(revinputaddress[0]) >atoi(revrightaddress[0])))
                                    {
                                        left=mid+1;
                                        mid=(left+right)/2;
                                        continue;
                                    }
                                    else
                                    {
                                        if( (atoi(revinputaddress[1]) <atoi(revleftaddress[1])) )
                                        {
                                            right=mid-1;
                                            mid=(left+right)/2;
                                            continue;
                                        }
                                        else if((atoi(revinputaddress[1]) >atoi(revrightaddress[1])))
                                        {
                                            left=mid+1;
                                            mid=(left+right)/2;
                                            continue;
                                        }
                                        else if(atoi(revrightaddress[1])!=atoi(revleftaddress[1]))
                                        {
                                            split(temp,"|",revtemp,&tempnum); //���ú������зָ�
                                            w++;
                                            printf("%16s%16s%13s%18s%17s%33s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);//16 16 13 18 17 33

                                            printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                            break;
                                        }
                                        else
                                        {
                                            if( (atoi(revinputaddress[2]) <atoi(revleftaddress[2])) )
                                            {
                                                right=mid-1;
                                                mid=(left+right)/2;
                                                continue;
                                            }
                                            else if((atoi(revinputaddress[2]) >atoi(revrightaddress[2])))
                                            {
                                                left=mid+1;
                                                mid=(left+right)/2;
                                                continue;
                                            }
                                            else
                                            {
                                                split(temp,"|",revtemp,&tempnum); //���ú������зָ�
                                                w++;
                                                printf("%16s%16s%13s%18s%17s%33s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);//16 16 13 18 17 33

                                                printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                                break;
                                            }
                                        }
                                    }

                                }
                                goto out9;



                            }
                        }
                    }
                }
                printf("ip�������!\n");
            }
out9:
            fclose(fp);
            endtime = clock();	//��ʱ����
            printf("��������%d\n",w);
            printf("��ѯʱ�䣺%dms\n", endtime-begintime);



        }
    }

}

void cmd_search(char str[])//���ļ��ж�ȡ����
{
    char *revbuf[2] = {0}; //��ŷָ������ַ���
    int num = 0;//�ָ�����ַ����ĸ���
    split(str," ",revbuf,&num); //���ú������зָ�
    if(strcmp(revbuf[0], "file")==0)
    {
        file_search(revbuf[1]);
    }
    else if(strcmp(revbuf[0], "vague")==0)
    {
        vague_search(revbuf[1]);
    }
    else
    {
        printf("�������\n");
        return ;
    }
}

void menu()
{
    printf("----------------�����˵���------------------\n");
    printf("\t\t0.�˳�ϵͳ\n");
    printf("\t\t1.����¼��ѯ\n");
    printf("\t\t2.��Χ��ѯ\n");
    printf("\t\t3.�����ѯ\n");
    printf("\t\t4.�����ѯ\n");
    printf("--------------------------------------------\n");
    printf("��ѡ��˵������루0-4����");
}

void keyDown()
{
    char input[256];
    int userkey;
    scanf("%d",&userkey);
    getchar();//����ַ�����Ļ�����
    switch (userkey)
    {
    case 0:
        printf("\t\t���˳�ϵͳ��\n");
        exit(0);
        break;
    case 1:
        printf("\t\t������¼��ѯ��\n");
        printf("������ip��ַ(��219.235.224.1):");
        scanf("%s",input);
        easy_search(input);
        break;
    case 2:
        printf("\t\t����Χ��ѯ��\n");

        range_search();

        break;
    case 3:
        printf("\t\t�������ѯ��(������һ��������)\n");
        printf("������ip��ַ(��219.235.224.1 219.236.1.1):");
        gets(input);

        team_search(input);

        break;
    case 4:
        printf("\t\t�������ѯ��\n");
        printf("�ļ���ѯ��:file example.txt\n");
        printf("ģ����ѯ��:vague 219.235.*.*(���޴˸�ʽ�Ұ�ʡ���ֵ�������)\n");
        printf("����������:\n");
        gets(input);

        cmd_search(input);

        break;
    default:
        printf("�����������������!");
        break;
    }
}

void welcome0()
{
    printf("\n\n\n\n\n\n");
    printf("\t\t\t~*************��ӭ����ip��ַ��ѯϵͳ*************~\n");
    printf("\n\n\n");
    printf("\t\t\t~*************������:  �޽��� 2020��2��*************~\n");
    printf("\n\n\n");
    printf("\t\t\t~*************��������������˵�*************~");
    while(getchar() == 0);
    system("cls");
    return ;
}

int main()
{
    system("color 0A");
    welcome0();
    while (1)
    {
        menu();
        keyDown();
        getchar();//����ַ�����Ļ�����
        system("pause");
        system("cls");
    }
}
