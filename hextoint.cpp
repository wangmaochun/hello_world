#include <stdio.h>

/************************************************************* 
* 函数名称： hexstringtobyte 
* 功能描述： 16进制字符串转换成字节数组 
			 "E4F1C3A81F"转换成bit存到一个数组char *的数组char * buf里
			 buf[0] = 0xE4,buf[1] = 0xF1,buf[2] = 0xC3,buf[3] = 0xA8.... 
* 参数列表： s     16进制字符串 
             bits  目标字节数组 
* 返回结果： 返回字节数组元素个数 
**************************************************************/  
int hexstringtobyte(char s[],char bits[]) {
    int i,n = 0;
    for(i = 0; s[i]; i += 2) {
        if(s[i] >= 'A' && s[i] <= 'F')
            bits[n] = s[i] - 'A' + 10;
        else bits[n] = s[i] - '0';
        if(s[i + 1] >= 'A' && s[i + 1] <= 'F')
            bits[n] = (bits[n] << 4) | (s[i + 1] - 'A' + 10);
        else bits[n] = (bits[n] << 4) | (s[i + 1] - '0');
        ++n;
    }
    return n;
}
 
int main(void) {
#if false 
	char s[] = "E4F1C3A81F";
    char bits[10];
    int i,n = hexstringtobyte(s,bits);
    printf ("%s\n",s);
    for(i = 0;i < n;i++)
        printf ("%X ",0XFF & bits[i]);
    printf("\n");
#endif
    
    
    return 0;
}



-------
#include<stdio.h>  
#include<string.h>  
#include<math.h>  

/************************************************************* 
* 函数名称： hextoint 
* 功能描述： 十六进制字符串转换为十进制 
* 参数列表： strHex  六进制字符串
             len     字符串长度  
* 返回结果： 成十进制
**************************************************************/  
// 
long hextoint(char strHex[],int len)
{
	int i = 0, temp = 0;  
    int sum =0;
    
    for (i = 0; strHex[i] != '\0'; ++i){  
        switch(strHex[i]){  
            case 'A': temp = 10; break;  
            case 'B': temp = 11; break;  
            case 'C': temp = 12; break;  
            case 'D': temp = 13; break;  
            case 'E': temp = 14; break;  
            case 'F': temp = 15; break;  
            default: temp = strHex[i]-'0'; break;  
        }  
        sum += (temp*pow(16,len-1-i));  
    }  
    
    return sum;
} 

int main(){  
    char strHex[10]="8B01"; 
    int len = strlen(strHex);  
     
    long answer = hextoint(strHex,len);
    printf("%lld",answer);  
    return 0;  
}


-------
	
//十六进制转十进制 
#include<stdio.h>
int main(){
	char s[50];
	scanf("%s",s);
	int t;
	long sum=0;
	for(int i=0;s[i];i++){
		if(s[i]<='9')
		t=s[i]-'0';
		else
		t=s[i]-'A'+10;
		sum=sum*16+t;
	}
	
	printf("%ld\n",sum);
	return 0;		
} 
