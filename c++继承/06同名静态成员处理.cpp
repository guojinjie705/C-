#include<iostream>
using namespace std;
//继承中的同名静态成员处理方式

class Base{
	public:
		static void func()
	{
		cout << "Base - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
		static int m_A;   //类内声明，类外初始化
};
int Base::m_A = 100;

class Son:public Base{  //注意继承是用一个：
	public:
		static void func()
	{
		cout << "Son - static void func()" << endl;
	}
		static int m_A;
};
int Son::m_A = 200;


//同名静态成员属性
void test01(){
	//通过对象来访问
	cout << "通过对象访问： " << endl;
	Son s;
	cout << "son 下 m_A = " << s.m_A << endl;
	cout<< "Base 下 m_A = " << s.Base::m_A << endl;


	//2.通过类名访问
	cout << "通过类名访问： " << endl;
	cout << "son下 m_A = " << Son::m_A  << endl;
	// 第一个::代表通过 类名方式访问， 第二个：：代表访问父类作用域
	cout << "Base下 m_A = " << Son::Base::m_A  << endl;

}
//同名静态成员函数
void test02(){
	//通过对象访问
	cout << "通过对象访问： " << endl;
Son s;
s.func();
s.Base::func();


//通过类名访问
cout << "通过类名访问： " << endl;
Son::func();
Son::Base::func();
//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
//如果想访问父类中被隐藏同名成员，需要加作用域
Son::Base::func(100);

}
int main(){
	test01();
	test02();
}
/*
继承中同名的静态成员在子类对象上如何进行访问？

静态成员和非静态成员出现同名，处理方式一致

访问子类同名成员 直接访问即可
访问父类同名成员 需要加作用域
*/