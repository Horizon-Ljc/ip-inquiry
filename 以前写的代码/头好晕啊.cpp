#include <bits/stdc++.h>
using namespace std;
struct node{
    int c, l, r;
    node(){}
    node(int l,int r,int c):c(c),l(l),r(r){}
};


vector<node> v;
int get(int l){
    return  v[l].r-v[l].l+1;
}
int check(int pos){
    int l = pos-1, r = pos+1, ans;
    if(get(pos) < 2) return 0;
    ans =  get(pos);
    while(1){
        if(l==-1 || r == v.size()) return ans;
        if(v[l].c != v[r].c) return ans;
        int t = get(l) + get(r);
        if(t < 3) return ans;
        ans += t;
        l--;
        r++;
    }
}
int main(){
    int T;scanf("%d", &T);
    while(T--){
        int n, c, cnt = 0;
        v.clear();
        int pos[111], t = 0;
        scanf("%d %d", &n, &c);
        v.push_back(node(0,0,-1));
        for (int i = 0; i < n; ++i)    {
            int cc; scanf("%d", &cc);
            if(v[cnt].c == cc) v[cnt].r=i;
            else{
                v.push_back(node(i,i,cc));
                cnt++;
                if(cc == c) pos[t++] = cnt;
            }
        }
        int ans = 0;
        for(int i=0;i<t;i++){
            ans = max(ans, check(pos[i]));
        }
        printf("%d\n", ans);
    }
    return 0;
}//消消乐相关 
