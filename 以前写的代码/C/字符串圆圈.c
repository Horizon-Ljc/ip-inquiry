#include<stdio.h>//abcb babcba  abcd babcba
#include<string.h>
int main()
{
	int t,i,j,k,yes,h;//h定位一个n中首字母 
	char m[101],n[101];
	scanf("%d",&t);
	while(t--){
		scanf("%s",m);
		getchar();
		scanf("%s",n);
		getchar();
		j=0;
		yes=1;
	//先试加的 
		for(i=0;i<strlen(m);i++){
			out3:
			if(m[i]==n[j]){
				j++;
				h=i;
				for(;j<strlen(n);j++){
						if(n[j]==m[++i]){
					if(i==strlen(m)-1){
						i=-1;
					}	
				}
				else{
					yes=0;
					goto out;
				}
				} 
				
			}
			else{
				if(i==strlen(m)-1){
				break;
				}
			}
		}
		out:
		if(!yes){
			yes=1;
			j=0;
			for(i=h;i<strlen(m);i++){
			if(m[i]==n[j]){
				j++;
				for(;j<strlen(n);j++){
					if(n[j]==m[--i]){
					if(i==0){
						i=strlen(m);
						
					}
					
				}
				else{
					yes=0;
					goto out2;
				}
				}
			}
			else{
				if(i==strlen(m)-1){
				break;
				}
			}
		}
		}
		out2:
			if(i<strlen(m)-1&&yes==0){
			i=h+1;
			j=0;
			goto out3;
		}
		if(yes)
		printf("Yes\n");
		else
		printf("No\n");
	} 
	return 0;
}//超时 
