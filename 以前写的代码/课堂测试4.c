#include <stdio.h>
char s[111];
int main(){
    while(~scanf("%s", s+1)){
        char op[5], c[2], cc[2]; int x, y, cnt = 0,i;
        while(scanf("%s", op)){//f��Ϊ�������  ��ָ֤��������� 
            if(op[0] == 'E') break;//ֻ����ȫ��ȷ������ָ����� 
            else if(op[0] == 'S'){
                scanf("%d %d %s", &x, &y, c);
                for(;x<=y;x++) s[x] = c[0];
            }
            else if(op[0] == 'T'){
                scanf("%s %s", c, cc);
                for( i=1;s[i];i++)
                    if(s[i] == c[0])
                        s[i] = cc[0];
            }
            printf("%d:%s\n", ++cnt, s+1);//������%s 
        }
        puts("");//���� 
    }
    return 0;
}

