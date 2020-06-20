#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]) {
	char m='A';
	char m2;
    int n,row, half, i, j, d;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&row);
		
			//打印钻石上半部分
	half = row / 2 + 1;	
	for(i = 1; i <= row; i++)
	{
		//打印前导空格
		for(j = 1; j <= row - i; j++)
		{
			printf(" ");	
		}
		//打印字符（从大到小)与从小到大 
		d=1; 
		m2=m+row-1;
		for(j = 1; j <= 2 * i - 1; j++)//与行数相关 !!!
		{
			
			if(d<=i){
				printf("%c",m2);
				if(d!=i)
				m2--; 
			}
			else{
				m2++;
				printf("%c",m2);
	
			}	
			d++;		
		}
		//换行
		printf("\n");
	}
	//打印钻石下半部分	
	for(i = 1; i < row; i++)
	{
		//打印前导空格
		for(j = 1; j<= i; j++)
		{
			printf(" ");	
		}
		d=1;
		m2=m+row-1;	
		for(j = 1; j <= 2 * (row- i - 1) + 1; j++)
		{
			if(d<= (row- i)){	
				printf("%c",m2);
				if(d!=(row- i))
				m2--; 
			}
			else{
				m2++;
				printf("%c",m2);
					
			}		
			d++;		
		}
		//换行
		printf("\n");
	}		  		
	}
	return 0;
}
