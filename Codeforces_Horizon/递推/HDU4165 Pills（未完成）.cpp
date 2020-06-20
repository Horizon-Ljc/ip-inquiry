#include<iostream>

using namespace std;

long long dp[105][105];

int main(){
    int n;

    for (int i = 0; i <= 30; ++i){
        dp[i][0] = 1;
    }

    for (int i = 1; i <= 30; ++i){
        for (int j = 1; j <= i; ++j)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];

            }
    }
    while(~scanf("%d",&n)&&n!=0){
        printf("%lld\n",dp[n][n]);
    }
    return 0;
}