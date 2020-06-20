#include<stdio.h>
#include<string.h>
int main()
{
	int K,a,b,h,m,n;
	char word[200];
	scanf("%d",&K);
	while(K--){
		m=1;
		scanf("%200s",word);
		getchar();
		n=strlen(word)-h-1;
		scanf("%d %d",&a,&b);
		for(h=a-1;h<=n;h++){
			n=strlen(word)-h-1;
			if(word[h]!=word[n])
			m=0;
			break;
		}
	if(m==0)
	printf("No\n");
	else
	printf("Yes\n");
	}
} 


#include<stdio.h>
int main()
{
int n;
int i,j;
int k,l;

char a[201],b[201],c[201];
scanf("%d",&n);
while(n--)
{ 

 //count 一定要放while()循环里面?
 int count = 0;
 //getchar() 用于吸收回车键“/”?
 getchar();
 //输入字符串，gets()和scanf("%s")区别可自行百度?
 gets(a);



 scanf("%d%d",&k,&l);
//第一个for()循环用于把长度为l的字符串copy到另一个数组b[]中?
 for(j=0,i=k-1;i<l+k-1;i++)
 {
 b[j++] = a[i];
 }
 //然后将字符串数组b[]逆序，保存在数组c[]中?
 for(j=0,i=l-1;i>=0;i--)
 {
 c[j++] = b[i];
}
 //对比数组b[]和c[];?
 for(i=0;i<l;i++)
 {
if(b[i] == c[i])
 count++;
}

 //相同与不同?
 if(count == l) ?printf("Yes\n");
 else printf("No\n");
}
}

