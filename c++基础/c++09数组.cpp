#include<iostream>
using namespace std;

int main()
{
	/*
	数组定义三法：
	数据类型 数组名[ 数组长度 ];
	数据类型 数组名[ 数组长度 ] = { 值1，值2 ...};
	数据类型 数组名[ ] = { 值1，值2 ...};

	总结1：直接打印数组名，可以查看数组所占内存的首地址
	总结2：对数组名进行sizeof，可以获取整个数组占内存空间的大小
	*/


	//创建
	// int arr[5] = {300,350,200,400,250};

	// int max = 0 ;//先认定一个最大值

	// for(int i =0; i < 5; i++){

	// 	if (arr[i] > max)
	// 	{
	// 		max = arr[i];
	// 	}

	// }
	// std::cout << "最重小猪的体重为：" << max << std::endl;

	

	int arr[5] = {1,3,2,5,4};
	std::cout << "数组逆置前：" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	//数组元素实现逆置
	int start = 0;    //起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while(start < end){
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end]  = temp;

		//下标更新
		start ++;
		end--;

	}
	//打印逆置后数组
	std::cout << "数组逆置后：" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] ;
	}
	return 0;
}