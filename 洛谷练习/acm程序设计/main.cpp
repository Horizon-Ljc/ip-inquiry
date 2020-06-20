#include<iostream>
using namespace std;
int n,m;
int a[100007];
int l,r,mid;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        l=max(l,a[i]);
        r+=a[i];
    }
    while(l<r){
        mid=(l+r)/2;
        int sum=0,cnt=0;

        for(int i=1;i<=n;i++){
            if(sum+a[i]<=mid)
                sum+=a[i];
            else sum=a[i],cnt++;
        }
        if(cnt>=m)l=mid+1;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}
