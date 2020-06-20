#include <stdio.h>
#include <string.h>
int main()
{
	int n,i;
	char a[11], b[11];
	scanf("%d", &n);
	while(n--){
		scanf("%s %s", a, b);
		for(i= 0; i < strlen(a) + strlen(b); i++){
			if(i & 1)
				putchar(b[strlen(b) - 1 - (i >> 1)]);
			else
				putchar(a[i >> 1]);
		}
		putchar('\n');
	}
	return 0;
}
