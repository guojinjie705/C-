#include<iostream>
using namespace std;

//函数模板

//交换两个整形函数
void swapInt(int &a,int &b){
	int temp  = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double &a,double &b){
	double temp  = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>  //声明一个模板，告诉编译后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a,T &b){
	T temp  = a;
	a = b;
	b = temp;

}
void test01(){
	int a = 10;
	int b = 20;
	//swapInt(a,b);
//利用函数模板交换
	//两种方式使用模板
	//1.自动类型推导
	mySwap(a,b);
	cout << "a= " << a <<"  b=" << b << endl;
//2.显示指定类型
	mySwap<int>(a,b);
	cout << "a= " << a <<"  b=" << b << endl;


	double c = 1.1;
	double d = 2.2;
	swapDouble(c,d);
	cout << "c= " << c <<"  d=" << d << endl;

}

int main(){
	test01();
}
/*
总结：

函数模板利用关键字 template
使用函数模板有两种方式：自动类型推导、显示指定类型
模板的目的是为了提高复用性，将类型参数化
*/