#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[21],b[21];
	int n;
	while((cin>>n),n){
		int x,y,z;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
        for(int j=0;j<n;j++)
        {
            if(a[j]>b[j]) x++;
            if(a[j]==b[j]) y++;
            if(a[j]<b[j]) z++;
        } 
		if(x>0&&z==0){
			cout<<1<<endl;	
		}else if(x==0&&z>0)
		cout<<-1<<endl;
		else
		cout<<0<<endl;
	}
	return 0;
 } 
