#include<iostream>
using namespace std;

//定义函数
int add(int num1,int num2){  //形参
	int sum = num1 + num2;
	return sum;
}
//总结：函数定义里小括号内称为形参，函数调用时传入的参数称为实参

int main(){
	int a = 100;   //实参
	int b = 10;
	int c = add(a,b);
	std::cout << "a + b = " << c << std::endl;



return 0;
}

/*
返回值类型 函数名 （参数列表）
{
       函数体语句
       return表达式
}

常见的函数样式有4种

1.无参无返
2.有参无返
3.无参有返
4.有参有返


函数分文件编写一般有4个步骤

1.创建后缀名为.h的头文件
2.创建后缀名为.cpp的源文件
3.在头文件中写函数的声明
4.在源文件中写函数的定义
*/