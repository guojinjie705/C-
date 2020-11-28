#include<iostream>
using namespace std;
/*
C++允许一个类继承多个类

语法： class 子类 ：继承方式 父类1 ， 继承方式 父类2...

多继承可能会引发父类中有同名成员出现，需要加作用域区分

C++实际开发中不建议用多继承
*/
class Base1{
	public:
		Base1(){
			m_A = 100;
		}
		int m_A;
};

class Base2{
	public:
		Base2(){
			m_B = 100;
			m_A = 600;
		}
		int m_B;
		int m_A;
};

//子类 需要继承base1 和base2
class Son:public Base1,public Base2{
public:
	Son(){
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test01(){
	Son s;
	cout << "size of son =" << sizeof(s) << endl;  //16
	// cout << "m_A = "  <<s.m_A << endl;
	//当父类中出现同名成员，需要加作用域区分
	cout << "Base1::m_A = " << s.Base1::m_A << endl;
	cout << "Base2::m_A = " << s.Base2::m_A << endl;
}
int main(){
	test01();
}