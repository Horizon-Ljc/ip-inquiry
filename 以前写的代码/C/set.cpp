#include<stdio.h>// 5 5 1 2 3 1 2 2 3 3 13 65 51
#define N 100000
int a[N];
int main()
{
    int k,n,s,yes,i,cnt,j,add;
    int b[5]; 
    scanf("%d",&k);
    while(k--){
        yes=1;
        cnt=1;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
                
        }
        b[0]=a[0];
        add=1;
        for(i=1;i<n;i++){
            for(j=0;j<cnt;j++){
            	if(a[i]==b[j]){
            	add=0;
            	break;
            }else
            add=1;
			}
			 if(add){
            	b[cnt]=a[i];   
                cnt++;
                add=1;
			}
			if(cnt>3){
            	yes=0;
            	goto out;
			}
        }
      	out:
        if(yes)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}//WA 1 5 2 4加上的元素再减去！！！！ 

