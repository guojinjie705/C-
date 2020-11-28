#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main(){
	//全局区
	//全局变量、静态变量、常量

	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout <<"局部变量a的地址为：" << (int)&a << endl;

	cout <<"局部变量b的地址为：" << (int)&b << endl;

	cout <<"全局变量g_a的地址为：" << (int)&g_a << endl;

	cout <<"全局变量g_b的地址为：" << (int)&g_b << endl;
}