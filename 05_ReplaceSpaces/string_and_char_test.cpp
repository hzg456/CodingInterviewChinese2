#include <cstdio>
#include <cstring>

//https://blog.csdn.net/ksws0292756/article/details/79432329

int main()
{
const char *a="Hello World"; 
//char *a="Hello World"; //这样的写法是写法是不规范的！a指向了即字符常量，一旦strcpy(a,”string2”)就糟糕了
char b[]="Hello World"; 
printf("%s, %d\n","Hello World", "Hello World"); 
//%s用来输出一个字符串 %d表示按整型数据的实际长度输出数据
printf("%s, %d %d\n", a, a,  &a);                           
printf("%s, %d %d\n", b,     b,  &b);
}