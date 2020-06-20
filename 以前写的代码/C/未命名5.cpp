#include<bits/stdc++.h>
using namespace std;
__int64 m[86];在数组变量定义时，将变量定义在全局区（非函数内部），就表示定义一个全局变量。
在函数内定义的变量是局部变量，而在函数外定义的变量叫做外部变量，外部变量是全局变量。全局变量可以为本文件中其他函数所共用，它的有效范围从定义变量的位置开始到本源文件结束。如：
int garr[100] ;
char gstr[50]="hello" ;
全局变量如果没有初始化，则，其内容由系统自动赋值为0。
void test()
{
    m[0] = 1;
    m[1] = 2;
    for(int i = 2; i < 86; i++)
    {
        m[i] = m[i-1] + m[i-2] + 1;
    }
}
int main()
{
    __int64 n;
    test();
    while(scanf("%I64d",&n) != EOF)
    {
        for(int i = 0; i < 86; i++)
        {
            if(n <= m[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}



