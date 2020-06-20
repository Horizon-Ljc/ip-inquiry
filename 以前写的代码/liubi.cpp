#include<bits/stdc++.h>
using namespace std;
typedef struct student{
	char id[11];
	double score;
}Student;
Student stu[40];
struct Ruler{
	bool operator()(const Student & s1,const Student s2) const{
		if(fabs(s1.score - s2.score) < 1e-10){
				if(strcmp(s1.id,s2.id)<0) return true;
		else return false;
		}else
		return s1.score>s2.score;
	}
};

int main()
{
	int t;
	double a,b=0;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d %d",&m,&n);
		for(int i=1;i<=m;i++){
			scanf("%s",&stu[i].id);
			for(int j=1;j<=n;j++){
				scanf("%lf",&a);
				b+=a;
			}
			stu[i].score=b/n;
			b=0;	 
		}
		sort(stu+1,stu+m+1,Ruler());
		int Rank = 1, cnt = 1;
        printf("%d %s %.1f\n",Rank,stu[1].id,stu[1].score);
        for(int i=2;i<=m;i++) {
            if(fabs(stu[i].score - stu[i-1].score) < 1e-10) {
                printf("%d %s %.1f\n",Rank,stu[i].id,stu[i].score);
                cnt++;
            }
            else {
                Rank += cnt;
                cnt = 1;
                printf("%d %s %.1f\n",Rank,stu[i].id,stu[i].score);
            }
        }
	}
}
 
