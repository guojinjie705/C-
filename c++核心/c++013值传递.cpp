#include<iostream>
using namespace std;
// 所谓值传递，就是函数调用时实参将数值传入给形参
// 值传递时,如果形参发生，并不会影响实参

void swap(int num1,int num2){
	std::cout << "交换前：" << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num1 << std::endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	std::cout << "交换后：" << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num1 << std::endl;
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	std::cout << "mian中的 a = " << a << std::endl;
	std::cout << "mian中的 b = " << b << std::endl;


	return 0;
}