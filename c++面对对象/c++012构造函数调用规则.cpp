#include<iostream>
using namespace std;

//构造函数的调用规则
//1.创建一个类，c++编译器会给每一个类都添加至少3个函数
//默认构造 （空实现）
//析构函数  （空实现）
//拷贝函数  （值拷贝）
/*
构造函数调用规则如下：

1.如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造

2.如果用户定义拷贝构造函数，c++不会再提供其他构造函数
*/
class Person{
	public:
		Person(){
			cout <<"person的默认构造函数调用" << endl;
		}

		Person(int age){
			cout <<"person的有参构造函数调用" << endl;
			m_Age = age;
		}

		Person(const Person & p){
			cout<<"Person的拷贝函数调用" <<endl;
			m_Age = p.m_Age;
		}
		~Person(){
			cout << "Person的析构函数调用" <<endl;
		}
		int m_Age;
};

void test01(){
	Person p;
	p.m_Age =  18;

	Person p2(p);
	cout << "p2的年龄为：" << p2.m_Age <<endl;
}
int main(){
	test01();

}