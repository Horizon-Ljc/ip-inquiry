#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void split(char *src, const char *separator, char **dest, int *num) 
{
    /*
        src 源字符串的首地址(buf的地址) 
        separator 指定的分割字符
        dest 接收子字符串的数组
        num 分割后子字符串的个数
    */
     char *pNext;
     int count = 0;
     
     if (src == NULL || strlen(src) == 0) //如果传入的地址为空或长度为0，直接终止 
        return;
        
     if (separator == NULL || strlen(separator) == 0) //如未指定分割的字符串，直接终止 
        return;
        
     pNext = (char *)strtok(src,separator); //必须使用(char *)进行强制类型转换(虽然不写有的编译器中不会出现指针错误)
     while(pNext != NULL) {
          *dest++ = pNext;
          ++count;
         pNext = (char *)strtok(NULL,separator);  //必须使用(char *)进行强制类型转换
    }  
    *num = count;
}

void easy()//从文件中读取数据
{
	int begintime,endtime;//计时 
	//char *filename = "ip.txt";
	char temp[256];
	char fileinput[256];
	FILE *fp = fopen("ip.txt","r");
	char input[256];
    //用来接收返回数据的数组。这里的数组元素只要设置的比分割后的子字符串个数大就好了。
    
	char *revbuf[7] = {0}; //存放分割后的子字符串
    int num = 0;//分割后子字符串的个数

	char *revleftaddress[4] = {0}; //存放分割后的首ip地址
	int leftnum = 0;

	char *revrightaddress[4] = {0}; //存放分割后的尾ip地址
	int rightnum = 0;

	char *revinputaddress[4] = {0}; //存放分割后的查找的ip地址
	int inputnum = 0;

	char *revtemp[4] = {0}; //存放分割后的查找的ip地址
	int tempnum = 0;

	printf("请输入ip地址(如192.168.1.1):");
    scanf("%s",&input);
	split(input,".",revinputaddress,&inputnum); //调用函数进行分割
	if(atoi(revinputaddress[0]) >= 0 && atoi(revinputaddress[0]) <= 255)
	{
		if(atoi(revinputaddress[1]) >= 0 && atoi(revinputaddress[1]) <= 255)
		{
			if(atoi(revinputaddress[2]) >= 0 && atoi(revinputaddress[2]) <= 255)
			{
				if(atoi(revinputaddress[3]) >= 0 && atoi(revinputaddress[3]) <= 255)
				{
					begintime=clock();	//计时开始
					while (fscanf(fp,"%s\n",&fileinput)!= EOF)
					{
						strcpy(temp , fileinput);
						split(fileinput,"|",revbuf,&num); //调用函数进行分割 
						split(revbuf[0],".",revleftaddress,&leftnum); //调用函数进行分割 
						split(revbuf[1],".",revrightaddress,&rightnum); //调用函数进行分割
						if( (atoi(revinputaddress[0]) == atoi(revleftaddress[0])) && (atoi(revinputaddress[0]) == atoi(revrightaddress[0])))
						{
							if((atoi(revinputaddress[1]) >= atoi(revleftaddress[1])) && (atoi(revinputaddress[1]) <= atoi(revrightaddress[1])))
							{
								if((atoi(revinputaddress[2]) >= atoi(revleftaddress[2])) && (atoi(revinputaddress[2]) <= atoi(revrightaddress[2])))
								{
									if((atoi(revinputaddress[3]) >= atoi(revleftaddress[3])) && (atoi(revinputaddress[3]) <= atoi(revrightaddress[3])))
									{
										split(temp,"|",revtemp,&tempnum); //调用函数进行分割 
										printf("%s-%s %s %s %s %s\n",revtemp[0],revtemp[1],revtemp[2],revtemp[4],revtemp[5],revtemp[6]);
										break;
									}
								}
							}
						}
					}
					fclose(fp);
					endtime = clock();	//计时结束
					printf("query Time：%dms\n", endtime-begintime);
					return;
				}
			}
		}
	}
	printf("ip输入错误!\n");
}

void menu()
{
	printf("--------------【ip查询系统】-------------\n");
	printf("\t\t0.退出系统\n");
	printf("\t\t1.单记录查询\n");
	printf("\t\t2.范围查询\n");
	printf("\t\t3.多组查询\n");
	printf("-------------------------------------------\n");
	printf("请选择菜单，输入（0-3）：");
}

void keyDown()
{
	int userkey;
	scanf("%d",&userkey);
	switch (userkey)
	{
	case 0:
		printf("\t\t【退出系统】\n");
		exit(0);
		break;
	case 1:
		printf("\t\t【单记录查询】\n");
		easy();
		break;
	case 2:
		printf("\t\t【范围查询】\n");

		break;
	case 3:
		printf("\t\t【多组查询】\n");

		break;
	default:
		printf("输入错误，请重新输入!");
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
