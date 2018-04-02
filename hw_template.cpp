

字符操作
判断一个字符是数字：      if (c >= '0' && c <= '9');
判断一个字符是大写字母：  if (c >= 'A' && c <= 'Z');
将char型数字转换为int型的一位数: int b = c - '0';
将int型数字转换为char型数字：char c = char(b + '0');
将大写字母转换为小写字母： char small = large + ('a' - 'A');

字符串操作 
依据条件筛选出一个长度不定的字符串：
int n = 0;
for(int i=0;i<n;i++)
{
    if(/*a[i]符合条件*/)
    {
        b[n] = a[i];
        n++;
    }
}
b[n] = '\0';

以下是string.h库中的常用函数 
求字符串长度： int len = strlen(str); 
字符串复制： strcpy(); 
字符串比较： strcmp(); 
字符串拼接： strcat(); 
查询字串： strchr(); 
查询子串： strstr(); 
以下是stdlib.h库中的常用函数 
将数字字符串(如”136”)转换为int型：int i = atoi(str); 
将数字字符串(如”136”)转换为float型：int f = atof(str); 
将数字字符串(如”136”)转换为long型：int l = atol(str); 
将int型多位数字转换为字符串型： itoa(str, i, 10);（第三个参数表示进制） 
另外C++还有一种string类，可以更方便地对字符串作处理，可自行查阅。 

排序函数。C/C++中自带有排序函数sort，位于头文件stdlib.h中，可以实现快速排序
（此处说的快速是指编写程序快速，并非排序算法中的快速排序），具体用法为： 
sort(a,a+len(a));//将数组a按照默认升序排列 
sort(a,a+len(a),cmp);//将数组a按照cmp函数指定的规则排列，例如如下的为降序规则
bool cmp(int a,int b)
{
    return a>b;
}
C/C++中定义了vector容器，位于头文件vector中，这是一种类似链表的结构，可以实现动态增长和删除，简单用法如下。 
几种vector声明： 
vectorvec1; //定义空的vector 
vectorvec2(10); //产生大小为10的vector 
vectorvec3(10,-1); //产生大小为10，并且每个元素都是-1的vector 
vectorvec4(v3); //用一个vector产生一个vecotr 
尾部插入元素： vec.push_back(a); 
尾部删除元素： vec.pop_back(a); 
插入元素： vec.insert(vec.begin()+i,a);在第i+1个元素前面插入a; 
删除元素： vec.erase(vec.begin()+2);删除第3个元素 
vec.erase(vec.begin()+i,vec.end()+j);删除区间[i,j-1];区间从0开始 
向量大小： vec.size(); 
清空： vec.clear(); 

实用迭代器访问元素： 
vector::iterator ita; //声明一个迭代器 
for(ita=v1.begin();ita != v1.end();ita++)
{
}//v1.begin()指向v1的第一个元素，v1.end()指向最后元素的下一位置。



附：一个标准的操作代码
#include <iostream>
using namespace std;

//冒泡排序
void bubbleSort(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n - 1 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


//打印数组
void printArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] = { 2, 3, 4, 1, 7 };
	int count = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, count);
	printArr(arr, count);
	//cout << count << endl;
	return 0;
}
