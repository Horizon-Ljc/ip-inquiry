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
    }     //��һ�����
    for (int i=3;i<n;i++)//�ڶ������
    if((i%2)!=0&&check(i))//�Ż�
    for (int j=i;j<n;j++)
        if((j%2)!=0&&check(j))//�Ż�
        if(check(n-i-j)) {
        cout<<i<<" "<<j<<" "<<n-i-j;return 0;//����ѭ�������������Ż���
        }

}
