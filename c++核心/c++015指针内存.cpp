#include<iostream>
using namespace std;

int main(){
	//指针所占内存空间
	int a = 10;

	// int *p;
	// p = &a;

	int * p = &a;

	std::cout << "sizeof(int *) = " << sizeof(int *) << endl;
	std::cout << "sizeof(float *) = " << sizeof(float *) << endl;
	std::cout << "sizeof(char *) = " << sizeof(char *) << endl;
	std::cout << "sizeof(double *) = " << sizeof(double *) << endl;

//总结：所有指针类型在32位操作系统下是4个字节
	//在64为操作系统下是8 个字节



}