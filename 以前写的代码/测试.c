#include<stdio.h>
#include<string.h>
int main(){
	int n;
	typedef struct name{
		char names[17];
		int cnt;
	}Name; 
	scanf("%d",&n);
	while(n--){
		int j;
		Name name1[20];
		for(j=0;j<20;j++)
		name1[j].cnt=0;
		int i=0;  
		do{
			
			scanf("%s",&name1[i].names);
			int h;
			for(h=0;h<20;h++){
				if(!strcmp(name1[i].names,name1[h].names)){
					name1[h].cnt++;
					break;
				}
			}
		 
			if(!strcmp(name1[i].names,"END"))
			break;
			i++;
		}while(1);
		int max=0;
		for(i=0;i<20;i++){
			if(name1[i].cnt>max){
				max=name1[i].cnt;
			}
		}
		printf("%s\n",name1[i].names);
	} 
} 

