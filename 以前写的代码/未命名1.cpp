#include<bits/stdc++.h>
using namespace std;
int check(int x){
    for (int i=2;i*i<=x;i++)
    if(x%i==0) return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(check(n-4)) {
    cout<<"2 "<<"2 "<<n-4;
    return 0;
    }     //第一种情况
    for (int i=3;i<n;i++)//第二种情况
    if((i%2)!=0&&check(i))//优化
    for (int j=i;j<n;j++)
        if((j%2)!=0&&check(j))//优化
        if(check(n-i-j)) {
        cout<<i<<" "<<j<<" "<<n-i-j;return 0;//不用循环第三个数，优化。
        }

}
