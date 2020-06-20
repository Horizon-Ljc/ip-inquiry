#include<bits/stdc++.h>
using namespace std;
const int N=2100005;
char s[1000005];
int sum[1000005][10];
bool vis[N+10];
void init(){
    int len=1;
    s[0]='*';
    for(int i=2;i<=N;++i){
        if(vis[i])continue;
        //cout<<i<<endl;
        len+=sprintf(s+len,"%d",i);
        //cout<<s<<endl;
        for(int j=i*2;j<=N;j+=i){
            vis[j]=1;
        }
    }
    s[len+1]='\0';
    for(int i=1;i<=1000003;++i){
        sum[i][0]=sum[i-1][0]+(s[i]=='0');
        sum[i][1]=sum[i-1][1]+(s[i]=='1');
        sum[i][2]=sum[i-1][2]+(s[i]=='2');
        sum[i][3]=sum[i-1][3]+(s[i]=='3');
        sum[i][4]=sum[i-1][4]+(s[i]=='4');
        sum[i][5]=sum[i-1][5]+(s[i]=='5');
        sum[i][6]=sum[i-1][6]+(s[i]=='6');
        sum[i][7]=sum[i-1][7]+(s[i]=='7');
        sum[i][8]=sum[i-1][8]+(s[i]=='8');
        sum[i][9]=sum[i-1][9]+(s[i]=='9');
    }
    //cout<<s<<endl;
}
int main(){
    init();
    int n,k,x,y,l,r;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&x,&y,&k);
        printf("%d\n",sum[y][k]-sum[x-1][k]);
    }
    return 0;
}
