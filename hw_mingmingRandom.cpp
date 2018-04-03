用计算机生成了N个1到1000之间的随机整数（N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。
然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。

Input Param 
     n               输入随机数的个数     
 inputArray      n个随机整数组成的数组 
Return Value
  OutputArray    输出处理后的随机整数
----
主要学习：
1) hashTalbe的简单使用
2) 测试多个样例输出
C语言格式    while(scanf("%d",&num)!=EOF)  
C++语言格式  while(cin>>num) 
3) 先死后活法:Easy级别题现在草稿纸上想好思路，然后分阶段实现

 

#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

//hashtable最大元素值
#define N 1000+1


//打印数组
void printArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


//N:1~1000
int main()
{
    
    
  int num;
	int data[N] = {0};
	
while(scanf("%d",&num)!=EOF)  //while(cin>>num) 
{  
  int hashTable[N]={0}; //多个样例时记得重新初始化
	for(int i=0;i<num;++i)
	{
	    cin>>data[i];
	}
	//printArr(data,num);
	
	for(int i=0;i<num;++i)
	{
	    if(hashTable[data[i]]==0)
	    {
	        hashTable[data[i]]=1;
	    }
	}
	
	for(int i=1;i<N;++i)
	{
	    if(hashTable[i]==1)
	    {
	        cout<<i<<endl;;
	    }
	}
}

    return 0;
}
	
