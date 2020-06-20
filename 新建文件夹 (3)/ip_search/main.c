#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int n,e;
int c[105][105];
int vis[105];
int closet[105];
int lowcost[105];
int w;

void prim()
{
    int j=1;
    vis[j]=1;
    int i,k;
    for(i=2; i<=n; i++)
    {
        closet[i]=1;
        lowcost[i]=c[1][i];
        vis[i]=0;
    }
    for(i=1; i<n; i++)
    {
        int mins=3005;

        for(k=2; k<=n; k++)
        {
            if(lowcost[k]<mins&&!vis[k])
            {
                mins=lowcost[k];
                j=k;

            }
        }
        vis[j]=1;
        w+=lowcost[j];



        for(k=2; k<=n; k++)
        {
            if(c[j][k]<lowcost[k]&&!vis[k])
            {
                lowcost[k]=c[j][k];
                closet[k]=j;
            }
        }
    }
    printf("%d\n",w);

}
int main()
{


    scanf("%d %d",&n,&e);
    int i;
    for(i=1; i<=e; i++)
    {
        int i,j,wij;
        scanf("%d %d %d",&i,&j,&wij);
        c[i][j]=wij;
        c[j][i]=wij;
    }
    int q;
    for(i=1; i<=n; i++)
    {
        for(q=1; q<=n; q++)
        {
            if(c[i][q]==0)
            c[i][q]=3005;
        }
    }

    prim();

    return 0;
}



