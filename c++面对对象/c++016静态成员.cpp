#include<iostream>
#include<string>
using namespace std;
//静态成员函数

//所有对象共享一个函数
//静态成员只能访问静态成员变量
class Person{

public:
//静态成员函数
static void func(){
	m_A = 100;  //静态成员函数可以访问 静态成员变量
	// m_B = 200;  // 静态成员函数不可以访问  非静态成员变量，因为无法区分到底是哪个对象的
	cout <<"static void func调用" <<endl;
}

static int m_A;  //静态成员变量
int m_B;  //非静态成员变量

//静态成员函数也是有访问权限的
private:
	static void func2(){
		cout <<"static void func2调用" <<endl;
	}
};

int Person::m_A = 0;  //初始化


void test01(){
	//静态成员变量的两种访问方法
	//1.通过对象
	Person P;
	P.func();
	//2.通过类型
	Person::func();

	// Person::func2();  类外访问不到私有静态成员函数
}
int main(){
	test01();
}