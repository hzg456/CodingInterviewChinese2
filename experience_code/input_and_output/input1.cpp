//�������ӵ���scanf�������˵�ʱ�����������������������һ�㶼�Ǵ���Ч�����⡣
#include <bits/stdc++.h>
using namespace std;
inline int Scan()  //inlineΪ����������Ŀ����Ԥ�����ɼ���ʱ��
{
    int res = 0, ch, flag = 0;

    if((ch = getchar()) == '-')             //�ж�����
        flag = 1;

    else if(ch >= '0' && ch <= '9')           //�õ���������
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