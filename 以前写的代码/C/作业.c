#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,h;
	char m[33];
	scanf("%d",&n);
	while(n--){
		scanf("%s",m);
		getchar();
		if(m[0]>='0'&&m[0]<='9'){
				printf("No\n");
		}else if(zifuchuan(m)){
			printf("No\n");
		}else{
			h=1;
			for(i=0;i<strlen(m);i++){
				if(m[i]>='0'&&m[i]<='9'||m[i]>='A'&&m[i]<='Z'||m[i]>='a'&&m[i]<='z'||m[i]=='_'){
						
				}
			
				
				else{
					h=0;
					break;
				}
				
			}
			if(h)
				printf("Yes\n");
				else
				printf("No\n");
		}
	
		
	}
	return 0;
 } 
int zifuchuan(char s[]){
	int ret=0;

	if(!strcmp(s,"auto")){
		ret=1;
	}
	else if(!strcmp(s,"break")){
		ret=1;
	}else if(!strcmp(s,"case")){
		ret=1;
	}else if(!strcmp(s,"char")){
		ret=1;
	}else if(!strcmp(s,"const")){
		ret=1;
	}else if(!strcmp(s,"continue")){
		ret=1;
	}else if(!strcmp(s,"default")){
		ret=1;
	}else if(!strcmp(s,"do")){
		ret=1;
	}else if(!strcmp(s,"double")){
		ret=1;
	}else if(!strcmp(s,"else")){
		ret=1;
	}else if(!strcmp(s,"enum")){
		ret=1;
	}else if(!strcmp(s,"extern")){
		ret=1;
	}else if(!strcmp(s,"float")){
		ret=1;
	}else if(!strcmp(s,"for")){
		ret=1;
	}else if(!strcmp(s,"goto")){
		ret=1;
	}else if(!strcmp(s,"if")){
		ret=1;
	}else if(!strcmp(s,"int")){
		ret=1;
	}else if(!strcmp(s,"long")){
		ret=1;
	}else if(!strcmp(s,"register")){
		ret=1;
	}else if(!strcmp(s,"return")){
		ret=1;
	}else if(!strcmp(s,"short")){
		ret=1;
	}else if(!strcmp(s,"signed")){
		ret=1;
	}else if(!strcmp(s,"sizeof")){
		ret=1;
	}else if(!strcmp(s,"static")){
		ret=1;
	}else if(!strcmp(s,"struct")){
		ret=1;
	}else if(!strcmp(s,"switch")){
		ret=1;
	}else if(!strcmp(s,"typedef")){
		ret=1;
	}else if(!strcmp(s,"union")){
		ret=1;
	}else if(!strcmp(s,"unsigned")){
		ret=1;
	}else if(!strcmp(s,"void")){
		ret=1;
	}else if(!strcmp(s,"volatile")){
		ret=1;
	}else if(!strcmp(s,"while")){
		ret=1;
	}else
	ret=0;

	return ret;
}
