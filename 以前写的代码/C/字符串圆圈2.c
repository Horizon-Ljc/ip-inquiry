#include <stdio.h>
#include<string.h>

char a[233];
char b[233];

int main()
{

	int t,i,j;
	scanf("%d", &t);

	while(t--){
		scanf("%s", a);
		scanf("%s", b);
		int la = strlen(a);
		int lb = strlen(b);
		int f = 1;//可以 bool f=true
		for(i = 0; i < la && f; i++)
			if(b[0] == a[i]){
				int pos = i;
				for(j = 0; j < lb; j++){
					if(b[j] == a[pos]){
						pos = (pos + 1) % la;//不需重新到开头 
					}else{
						break;
					}
				}
				if(j == lb){
					f = 0;
					break;
				}
				pos = i;
				for(j = 0; j < lb; j++){
					if(b[j] == a[pos]){
						pos = (abs(pos - 1 + la)) % la;
					}else{
						break;
					}
				}
				if(j == lb){
					f = 0;
					break;
				}
			}
		if(f)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
