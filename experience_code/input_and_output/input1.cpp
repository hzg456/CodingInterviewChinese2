//当遇到坑的题scanf都过不了的时候就用这个，不过这样的情况一般都是代码效率问题。
#include <bits/stdc++.h>
using namespace std;
inline int Scan()  //inline为内联函数，目的是预处理，可减少时间
{
    int res = 0, ch, flag = 0;

    if((ch = getchar()) == '-')             //判断正负
        flag = 1;

    else if(ch >= '0' && ch <= '9')           //得到完整的数
        res = ch - '0';
    while((ch = getchar()) >= '0' && ch <= '9' )
        res = res * 10 + ch - '0';

    return flag ? -res : res;
}
int main()
{
    int n=Scan();
    printf("%d\n",n);
}