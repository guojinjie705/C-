#include<iostream>
using namespace std;

//继承中同名成员处理
/*
当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？

访问子类同名成员 直接访问即可
访问父类同名成员 需要加作用域

*/
class Base{
public:
	Base(){
		m_A= 100;
	}

	

	void func(){
		cout << "Base---func调用" <<endl;}

	void func(int a){
		cout << "Base---func调用" <<endl;}
public:
	int m_A;
};
class Son:public Base{
public:
	Son(){
		m_A = 2000;

	}
	

	void func(){
		cout << "Son---func调用" <<endl;
	}
public:
	int m_A;
};
//同名成员属性
void test01(){
	Son s;
	cout << "Son 下 m_A = " <<s.m_A << endl;
	//如果通过子类对象，访问到父类中同名成员，需要加作用域
	cout << "Base下 m_A = "  << s.Base::m_A << endl;
}

//同名成员函数
void test2(){
	Son s;
	s.func();  //直接调用  调用的是子类中的同名成员

	//如何调用到父类中同名成员函数？
	s.Base::func();

	s.Base::func(10);
}

int main(){
	test01();
	test2();
}
/*总结：

子类对象可以直接访问到子类中同名成员
子类对象加作用域可以访问到父类同名成员
当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数*/