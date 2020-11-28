#include<iostream>
using namespace std;
/*实现一个对数组进行排序的函数
案例描述：

利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
排序规则从大到小，排序算法为选择排序
分别利用char数组和int数组进行测试
*/

//交换函数模板
template<class T>
void mySwap(T &a,T &b){
	T temp = a;
	a = b;
	b = temp;
}
//排序算法
template<class T>
void mySort(T array[],int len){
	for (int i = 0; i < len; i++)
	{
		int max = i; //认定最大值的下标
		for (int j = i+1; j < len;j++)
		{
			//认定的最大值比遍历出的数值要下，说明j下标的元素才是真正的最大值
			if (array[max] < array[j])
			{
				max = j;  //更新最大值的下标
			}
		}
		if (max != i)
		{
			//交换max和i元素
			mySwap(array[max],array[i]);
		}
	}
}

//打印数组模板
template<class T>
void ptintArray(T array[],int len){
	for (int i = 0; i < len; i++)
	{
		cout <<array[i]  <<"  ";
	}
	cout <<endl;

}
void test01(){
	char charArray[] = "badcfe";
	int num = sizeof(charArray) / sizeof(char);
	mySort(charArray,num);
	ptintArray(charArray,num);
}

void test02(){
	int intArray[] = {7,5,9,4,2,8,10,1,3,6};
	int num = sizeof(intArray)/sizeof(int);
	mySort(intArray,num);
	ptintArray(intArray,num);
}
int main(){
	test01();
	test02();
}