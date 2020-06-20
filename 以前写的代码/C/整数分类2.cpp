#include <stdio.h>

int main()
{
        char str[500];
        char *cp;
        int sum, sum2;
        while(scanf("%s", str)!=EOF)//?
        {
                cp = str;
                sum = sum2 = 0;
                if(*cp=='0' )//?
                        break;
                while(*cp != '\0')
                {
                        sum += *cp-'0';
                        cp++;
                }
                while(sum>9)
                {
                        sum2 += sum%10;
                        sum /= 10;
                        if(sum<10)
                        {
                                sum2 += sum;
                                sum = sum2;
                                sum2 = 0;
                        }
                }
                printf("%d\n", sum);
        }
        return 0;
}


