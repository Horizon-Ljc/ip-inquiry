#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		char sti[1001],s;
		gets(sti);
		cin>>s;
		char *p=strtok=(sti,s);
		while(p!=NULL){
			cout<<p<<endl;
			p=strtok(NULL,s);
		}
	}
	return 0;
 } 
