//十进制转换为十六进制
#include <stdio.h>
char *convert(char * str, long num, int &i);

int main()
{
	long num;
	int i=0;
	printf("please input a number:\n");
	scanf("%ld", &num);
	
	char str[100];
	convert(str,num,i);
	for(int n=i;n>=0;n--)
	{
	printf("%c",str[n]);
	
	}
	printf("\n");
	return 0;
}

char *convert(char * str, long num, int &i)
{
	long n=num;
	long temp=0;
	do
	{
		temp=num%16;
		if (temp<10)
			str[i++]=temp+'0';
		else
			str[i++]=temp+'a'-10;
		num/=16;
	}while(num);
	str[i--]='\0';
	return str;
}

----
#include<stdio.h>
 
int main()
{
    int u10;
    char u16[10];
    int w=0,a,b,i;
     
    printf("请输入一个数字-->");
    scanf("%d",&u10);
    if(u10==0)
    {
        u16[0]='0';
        w++;
    }
    else
    {
        a=u10;
        while(a)
        {
            b=a%16;
            if(b<10)
            {
                u16[w]='0'+b;
            }
            else
            {
                u16[w]='A'+b-10;
            }
            a=a/16;
            w++;
        }
    }
    printf("\n");
    printf("%d(10)转换为16进制数字为：",u10);
    for(i=w-1;i>=0;i--)
    {
        printf("%c",u16[i]);
    }
    printf("\n");
}
