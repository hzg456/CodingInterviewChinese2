#include <cstdio>
#include <cstring>

//https://blog.csdn.net/ksws0292756/article/details/79432329

int main()
{
const char *a="Hello World"; 
//char *a="Hello World"; //������д����д���ǲ��淶�ģ�aָ���˼��ַ�������һ��strcpy(a,��string2��)�������
char b[]="Hello World"; 
printf("%s, %d\n","Hello World", "Hello World"); 
//%s�������һ���ַ��� %d��ʾ���������ݵ�ʵ�ʳ����������
printf("%s, %d %d\n", a, a,  &a);                           
printf("%s, %d %d\n", b,     b,  &b);
}