#include<bits/stdc++.h>
using namespace std
int main()
{
	char cha;
	char s[100][100];
	while(~scanf("%c",&cha)){
		if(cha=='#') return 0;
		int n=cha-'A'+1;//i行数
		
		char cha1;
		for(int i=0;i<n;i++){
			cha1='A';
			int m=1;//列数 
			char1+=i;
			for(int j=1;j<=n;j++){
				s[i][j]=char;
				printf("%c",char);
				m++;
			}
			
			for(char1+=1;cha1<=cha;cha1++){
				s[i][m]=cha1;
				m++;
				printf("%c",cha1);
			}
			
			for(;m>=1;m--){
				printf("%c",s[i][m])
			}
			printf("\n");
		}
		for(;n>1;n--){
			for(m=1;m<=2*n-1;m++){
				printf("%c",s[i-1][m]);
				i--;
				printf("\n");
			}
		} 
	}
	return 0;
}
