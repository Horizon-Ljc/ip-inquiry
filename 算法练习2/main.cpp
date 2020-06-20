

#include<cstdio>
#include<algorithm>//
#include<cstring>
using namespace std;
int n,m,ans,st[105],top;
char s[105][105];
bool used[105];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++)
        scanf("%s",s[i]+1);
    for(int i=1; i<=n; i++)
    {
        if(used[i])
            continue;
        bool found=0;
        for(int j=i+1; j<=n; j++)
        {
            if(used[j])
                continue;
            bool f=1;
            for(int k=1; k<=m; k++)
                if(s[i][k]!=s[j][k])
                    f=0;
            if(f)
            {
                used[j]=1;
                found=1;
                break;
            }
            f=1;
            for(int k=1; k<=m; k++)
                if(s[i][k]!=s[j][m-k+1])
                    f=0;
            if(f)
            {
                used[j]=1;
                found=1;
                break;
            }
        }
        if(found)
        {
            used[i]=1;
            st[++top]=i;
            ans+=2;
        }
    }
    int x=0;
    for(int i=1; i<=n; i++)
    {
        if(used[i])
            continue;
        bool f=1;
        for(int k=1; k<=m; k++)
            if(s[i][k]!=s[i][m-k+1])
                f=0;
        if(f)
        {
            ans++;
            x=i;
            break;
        }
    }
    printf("%d\n",ans*m);
    for(int i=1; i<=top; i++)
        printf("%s",s[st[i]]+1);
    if(x)
        printf("%s",s[x]+1);
    for(int i=top; i>=1; i--)
    {
        for(int j=m; j>=1; j--)
            putchar(s[st[i]][j]);
    }
    putchar('\n');
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    set<string> seen;
    string ans;
    string palin;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string r = s;
        reverse(r.begin(), r.end());
        if (r == s)
            palin = s;
        else if (seen.count(r))
        {
            ans += r;
        }
        seen.insert(s);
    }
    string rans = ans;
    reverse(rans.begin(), rans.end());
    cout << ans.size()*2+palin.size() << endl;
    cout << ans << palin << rans << endl;
}
#include<cstdio>
#include<algorithm>
#include<cstring>
#define ll long long
using namespace std;
int n;
ll m,l,r,t;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%lld",&n,&m);
        t=0,l=r=m;
        bool flag=1;
        while(n--)
        {
            ll ti,x,y;
            scanf("%lld%lld%lld",&ti,&x,&y);
            l-=ti-t,r+=ti-t;
            t=ti;
            l=max(l,x),r=min(r,y);
            if(l>r)
                flag=0;
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    map<string, int> mp;
    int ans = 0;
    string SS;
    for(int i=0; i<N; i++)
    {
        string S;
        cin >> S;
        string T = S;
        reverse(T.begin(), T.end());
        if(mp[T] > 0)
        {
            ans += 2;
            mp[T]--;
            SS.append(S);
        }
        else
        {
            mp[S]++;
        }
    }
    string CC;
    for(auto& p : mp)
        if(p.second > 0)
        {
            string s = p.first;
            reverse(s.begin(), s.end());
            if(s == p.first)
            {
                ans++;
                CC = s;
                break;
            }
        }
    cout << ans*M << endl;
    string Ans = SS + CC;
    reverse(SS.begin(), SS.end());
    Ans += SS;
    cout << Ans << endl;
    return 0;
}
