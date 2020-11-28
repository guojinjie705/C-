#include<iostream>
using namespace std;

int main()
{
	//指针就是一个内存地址
	int a = 10;
	//1.定义指针    数据类型 * 变量名 ;
	int * p;
	p = &a;     //让指针记录变量a的地址

	std::cout <<"a的地址为：" << &a << std::endl;
	std::cout <<"指针p的地址为：" << p << std::endl;


	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	std::cout <<"a = " << a << std::endl;
	std::cout <<"*p = ：" << p << std::endl;
 	return 0;
}