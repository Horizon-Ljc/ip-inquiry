#include<bits/stdc++.h>
using namespace std;
long long cnt=1,m;
struct inf{
    long long ren;
    long long jl;
    string name;//ÓÃµÃË¬°¡ 
    long long cos;
};
inf  p[10005];
int main()

{
	int min=100000000;

    while(cin>>p[cnt].ren>>p[cnt].jl>>p[cnt].name)
        cnt++;
        
        
    for(int i=1;i<cnt;i++)
    {
        for(int g=1;g<cnt;g++)
            p[i].cos+=abs(p[i].jl-p[g].jl)*p[g].ren;
        if(p[i].cos<=min)
        {
            min=p[i].cos;
            m=i;
        }
    }
    cout<<p[m].name<<" "<<p[m].cos<<endl;
    return 0;
} 
