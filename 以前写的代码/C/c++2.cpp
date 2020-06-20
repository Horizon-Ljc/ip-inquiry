#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		char sti[1001],p;
		char *s;
		gets(sti);
		cin>>p;
		s=&p;
		char *p=strtok(sti,s);
		while(p!=NULL){
			cout<<p<<endl;
			p=strtok(NULL,*s);
		}
	}
	return 0;
 } 
