#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int n,maxx,sum,arr[70];
int ispos;
int vis[70];


void dfs(int res,int js,int pos)
{

    if(ispos==1)    return;

    if(js==n)   {ispos=1;return;}

    if(res==0 && js<n)  dfs(maxx,js,0);

    int i;
    for(i=pos;i<n;++i)
    {
        if(!ispos && !vis[i] && arr[i]<=res)
        {
            vis[i]=1;
            dfs(res-arr[i],js+1,pos);
            vis[i]=0;



            if(res==maxx)   return;

        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    while(cin>>n)
    {
        if(!n)  break;
        sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n,greater<int>());
        maxx=arr[0];


        ispos=0;
        while(!ispos)
        {

            while(sum%maxx!=0) maxx++;

            memset(vis,0,sizeof(vis));
            dfs(maxx,0,0);
            if(ispos)   break;
            maxx++;
        }
        cout<<maxx<<endl;
    }
    return 0;
}
