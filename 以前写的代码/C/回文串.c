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

 //count һ��Ҫ��while()ѭ������?
 int count = 0;
 //getchar() �������ջس�����/��?
 getchar();
 //�����ַ�����gets()��scanf("%s")��������аٶ�?
 gets(a);



 scanf("%d%d",&k,&l);
//��һ��for()ѭ�����ڰѳ���Ϊl���ַ���copy����һ������b[]��?
 for(j=0,i=k-1;i<l+k-1;i++)
 {
 b[j++] = a[i];
 }
 //Ȼ���ַ�������b[]���򣬱���������c[]��?
 for(j=0,i=l-1;i>=0;i--)
 {
 c[j++] = b[i];
}
 //�Ա�����b[]��c[];?
 for(i=0;i<l;i++)
 {
if(b[i] == c[i])
 count++;
}

 //��ͬ�벻ͬ?
 if(count == l) ?printf("Yes\n");
 else printf("No\n");
}
}

