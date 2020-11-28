#include<iostream>
using namespace std;
//冒泡排序
//排序总轮数 = 元素个数-1
//每轮对比次数 = 元素个数-排序轮数-1
int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	std::cout << "排序前：" << std::endl;
	for (int i = 0; i <= 9; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
//开始排序
	//排序总轮数 = 元素个数-1
	for (int i = 0; i < 9-1; i++)
	{
		//内层循环对比   对比次数 = 元素个数-当前轮数-1
		for (int j = 0; j < 9 - i-1; j ++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}

	std:cout << "冒泡排序后：" << std::endl;
	for (int i = 0; i < 9; i++)
	{
		std::cout << arr[i];
	}
	return 0;
} 