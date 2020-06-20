#include <cstdio>

using namespace std;

const double eps = 1e-8;
const double pi = acos(-1.0);
const int inf = 0x3f3f3f3f;

struct node{
	double x, y;
} p[33];

int n;
 
double filter(double x){
	double maxx=-inf, minx=inf, maxy=-inf, miny=inf;
	for (int i=0; i<n; ++i){
		maxx = max(maxx, p[i].x*cos(x)-p[i].y*sin(x));
		maxy = max(maxy, p[i].x*sin(x)+p[i].y*cos(x));
		miny = min(miny, p[i].x*sin(x)+p[i].y*cos(x));
		minx = min(minx, p[i].x*cos(x)-p[i].y*sin(x));
	}
	return max(maxx-minx, maxy-miny);
}
 
int main(){
	
	int t;
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		for (int i=0; i<n; ++i)
			scanf("%lf%lf", &p[i].x, &p[i].y);
		double l=0.0, r=pi/2.0, mid, tri;
		while (r-l > eps){
			mid = (r+l)/2.0;
			tri = (r+mid)/2.0;
			if (filter(mid) > filter(tri))
				l = mid;
			else
				r = tri;
		}
		double ans = filter(l);
		printf("%.2f\n", ans*ans);
	}
	return 0;
}