#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]) {
	char m='A';
	char m2;
    int n,row, half, i, j, d;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&row);
		
			//��ӡ��ʯ�ϰ벿��
	half = row / 2 + 1;	
	for(i = 1; i <= row; i++)
	{
		//��ӡǰ���ո�
		for(j = 1; j <= row - i; j++)
		{
			printf(" ");	
		}
		//��ӡ�ַ����Ӵ�С)���С���� 
		d=1; 
		m2=m+row-1;
		for(j = 1; j <= 2 * i - 1; j++)//��������� !!!
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
		//����
		printf("\n");
	}
	//��ӡ��ʯ�°벿��	
	for(i = 1; i < row; i++)
	{
		//��ӡǰ���ո�
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
		//����
		printf("\n");
	}		  		
	}
	return 0;
}
