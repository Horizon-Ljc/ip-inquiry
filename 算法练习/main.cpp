#include <cstdio>
#include <iostream>

using namespace std;


int f[30],d[30],t[30];
int ans;
int ti[30];
int a,a1[30];
int b,tf[30];

int main()
{
    ios::sync_with_stdio(0);

    int n,h;
    int i,j;
    while(cin>>n&&n>0)
    {
        cin>>h;
        for(i=0; i<n; i++)
        {
            cin>>f[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>d[i];
        }
        for(i=0; i<n-1; i++)
        {
            cin>>t[i];
        }
        h*=12;
        ans=-1;
        for(i=0; i<n; i++)
        {

            b=h;
            for(j=0; j<n; j++)
            {
                tf[j]=f[j];
                a1[j]=0;
            }
            a=0;


            while(b>0)
            {
                int ind=0,maxss=tf[0];
                for(j=0; j<=i; j++)
                {
                    if(tf[j]>maxss)
                    {
                        maxss=tf[j];
                        ind=j;
                    }
                }
                if(maxss==0)
                {
                    a1[0]+=b*5;
                    break;
                }
                else
                {
                    a1[ind]+=5;
                    a+=tf[ind];
                    if(tf[ind]>=d[ind])
                    {
                        tf[ind]-=d[ind];
                    }
                    else
                    {
                        tf[ind]=0;
                    }
                }
                b--;
            }
            if(i!=n-1)
            {
                h-=t[i];
            }
            if(a>ans)
            {
                ans=a;
                for(j=0; j<n; j++)
                {
                    ti[j]=a1[j];
                }
            }
        }
        cout<<ti[0];
        for(i=1; i<n; i++)
        {
            cout<<", "<<ti[i];
        }
        cout<<endl;
        cout<<"Number of fish expected: "<<ans<<endl;
        cout<<endl;
    }
    return 0;
}
