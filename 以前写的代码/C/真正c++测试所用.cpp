#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1000005;
const int mod = 1000000007;
int f[maxn], dp[maxn];
int n;

void init(){
    dp[1] = 1;
    for (int i=2; i<maxn; ++i)
        dp[i] = 2ll*dp[i-1]%mod;
    f[2] = 1;
    for (int i=3; i<maxn; ++i)
        f[i] = (1ll*f[i-1]+f[i-2]+dp[i-1])%mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    init();
    int T;
    cin >> T;
    while (T--){
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}
