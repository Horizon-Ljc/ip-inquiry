#include<stdio.h>
#define ll int
int mod;
ll qmod(int k, ll x){
    ll res = 1;
    while(k){
        if(k&1) res = res * x % mod;
        x = x*x%mod
        ;k >>= 1;
    }
    return res;
}
ll a[11];
int main(){
    int T, n, x,i;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &n, &mod, &x);
        ll ans = 0, temp = 1;
        for(i=n;i>=0;--i){
            scanf("%d", &a[i]);
        }
        for(i=0;i<=n;i++){
            ans = (ans + a[i] * temp) % mod;
            temp = temp * x % mod;
        }
        printf("%d\n", ans);
    }
    return 0;
}
