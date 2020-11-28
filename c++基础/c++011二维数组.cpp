#include<iostream>
using namespace std;
#include<string>
int main()
{
	//定义数组
	/*
数据类型 数组名[ 行数 ][ 列数 ];
数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};
	*/

	//1.创建
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = {"张三","李四","王五"};
	//2.统计总分
	for (int i = 0; i < 3; i++)  //控制行
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)  //控制列
		{
			sum += scores[i][j];
		}
		std::cout << names[i] << "的总分为：" << sum << std::endl;
	}

	return 0;
}

/*
查看二维数组所占内存空间
获取二维数组首地址
示例：

"二维数组大小： " << sizeof(arr) 
"二维数组一行大小： " << sizeof(arr[0]) 
"二维数组元素大小： " << sizeof(arr[0][0]) 

"二维数组行数： " << sizeof(arr) / sizeof(arr[0])
"二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0])

	//地址
"二维数组首地址：" << arr
"二维数组第一行地址：" << arr[0] 
"二维数组第二行地址：" << arr[1]

"二维数组第一个元素地址：" << &arr[0][0] << endl;
"二维数组第二个元素地址：" << &arr[0][1] << endl;
*/