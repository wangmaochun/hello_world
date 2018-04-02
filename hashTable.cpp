该代码值得学习的地方：
1） hashTable的简单使用学习,比如清空
2)  能够实现字符串顺序打印（当然也可以不使用）
3)  实现多个测试样例的C语言格式：while(scanf("%s" , str) != EOF)  
----
去除重复字符并排序
样例输入：       aabcdefff
样例输出：       abcdef
----
#include<iostream>  
#include<cstdio>  
#include<cstring> 
#include<memory>  
using namespace std;  
  
void solve(char *str , int len)  
{  
    int i , hash[256];  
    memset(hash , 0 , sizeof(hash));  
  
    for(i = 0 ; i < len ; ++i)  
    {  
        if(0 == hash[str[i]])  
            hash[str[i]] = 1;  
    }  
    for(i = 0 ; i < 256 ; ++i)  
    {  
        if(0 != hash[i])  
            putchar(i);  
    }  
    printf("\n");  
}  
  
int main(void)  
{  
    int len;  
    char str[1000];  
  
    while(scanf("%s" , str) != EOF)  
    {  
        len = strlen(str);  
        solve(str , len);  
    }  
    return 0;  
}  
