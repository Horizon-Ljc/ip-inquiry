#include<stdio.h>
#include<string.h>
int luomashu(char m[]){
	int X;
	
	if(strcmp(m,"I")==0)
	X=1;
	else if(strcmp(m,"V")==0) //ZIFUYONG "" BUSHI'' 
		X=5;
		else if(strcmp(m,"X")==0)
			X=10;
				else if(strcmp(m,"L")==0)
				X=50;
					else if(strcmp(m,"C")==0)
					X=100;
						else if(strcmp(m,"D")==0)
						X=500;
							else if(strcmp(m,"M")==0)
							X=1000;
							return X;
}
int main()
{
	char m[26];
	int i,h;
	char *cp;
	while(scanf("%s",m)){
		h=0;
		cp=m;
		while((cp=0));cp<3;cp++){
				h+=luomashu(cp);//°Ñm¡¾i¡¿¸ÄÎªm 
		}
		
			printf("%d\n",h);
	}
	return 0;
}
