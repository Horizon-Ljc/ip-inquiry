#include<stdio.h>//weiwan 
#include<string.h>
char flag[233];
int main()
{
	int n,i;
	char c;
	char time[23][23], name[23][23];
	char tt[23], nn[23], su[23];
	int id;
	
	scanf("%d\n", &n);// \n注意 
	while(scanf("%s %s %d %s", tt, nn, &id, su) != EOF){// 无&   
			id -= 1000;
			if(su[0] == 'A')
			//if(strcmp(su,"Accepted") == 0)
				//tt = 3600*(10*time[0]+time[1]) + 60*(10*time[3]+time[4]) + (10*time[6]+time[7]);
				if(flag[id] == 0 || strcmp(tt, time[id]) < 0){
					flag[id] = 1;
					strcpy(name[id], nn);
					strcpy(time[id], tt);//strcpy用来比较大小 
				}
            while((c = getchar()) != '\n');//遍历 
	}
	for(i = 1; i <= n; i++){//i=0的位置可以不用 
		if(flag[i])
			printf("%d %s %s\n", i+1000, time[i], name[i]);
		else
        	printf("%d\n", i+1000);

	}
	return 0;
}/*3 
00:35:10 Team001 1001 Wrong Answer 
00:55:20 Team002 1002 Runtime Error 
00:56:21 Team003 1002 Time Limit Error 
01:06:22 Team001 1001 Accepted 
01:26:56 Team002 1001 Accepted 
02:08:10 Team003 1001 Wrong Answer 
02:10:33 Team003 1001 Accepted 
02:20:10 Team001 1002 Time Limit Error 
02:40:20 Team003 1003 Accepted 
02:42:52 Team002 1002 Accepted 
02:50:35 Team003 1002 Runtime Error 
02:51:48 Team003 1002 Accepted
样例输出
1001 01:06:22 Team001 
1002 02:42:52 Team002 
1003 02:40:20 Team003*/
