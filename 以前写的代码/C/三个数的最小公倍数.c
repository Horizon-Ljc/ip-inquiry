#include<stdio.h>//1 2 3 4 =4
int lcm(int a,int b,int c);
int main()
{
    int k,n,i,min,d,b,c;
    int a[50];
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        min=lcm(a[0],a[1],a[2]);
        	for(d=0;d<=n-3;d++){
        	for(b=d+1;b<=n-2;b++){
        		for(c=b+1;c<=n-1;c++){
        			if(min>lcm(a[d],a[b],a[c]))
        			min=lcm(a[d],a[b],a[c]);
				}
			}
		}
		
        
		printf("%d\n",min); 
    }
    return 0; 
}
int lcm(int a,int b,int c){
	int n,max;
	if(a>b)
	max=a;
	else
	max=b;
	if(max<c)
	max=c;
	for(n=max;;n++){
		if(n%a==0&&n%b==0&&n%c==0){
			break;
		}
	}
	return n;
}//³¬Ê± 

