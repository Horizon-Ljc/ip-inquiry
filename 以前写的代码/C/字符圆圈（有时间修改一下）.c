#include<stdio.h>//abcb babcba  abcd babcba
#include<string.h>
int main()
{
    int len1,len2;
    int t,i,j,k,yes,h;//h定位一个n中首字母 
    char m[101],n[101];
    scanf("%d",&t);
    while(t--){
        scanf("%s",m);
        len1=strlen(m);
        scanf("%s",n);
        len2=strlen(n);
        j=0;
        yes=1;
    //先试加的 
        for(i=0;i<len1;i++){
            out3:
            if(m[i]==n[j]){
                j++;
                h=i;
                for(;j<len2;j++){
                        if(n[j]==m[++i]){
                    if(i==len1-1){
                        i=-1;
                    }    
                }
                else{
                    yes=0;
                    goto out;
                }
                } 
                
            }
            else{
                if(i==len1-1){
                break;
                }
            }
        }
        out:
        if(!yes){
            yes=1;
            j=0;
            for(i=h;i<len1;i++){
            if(m[i]==n[j]){
                j++;
                for(;j<len2;j++){
                    if(n[j]==m[--i]){
                    if(i==0){
                        i=len1;
                        
                    }
                    
                }
                else{
                    yes=0;
                    goto out2;
                }
                }
            }
            else{
                if(i==len1-1){
                break;
                }
            }
        }
        }
        out2:
            if(i<len1-1&&yes==0){
            i=h+1;
            j=0;
            goto out3;
        }
        if(yes)
        printf("Yes\n");
        else
        printf("No\n");
    } 
    return 0;
}

