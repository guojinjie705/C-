#include<iostream>
#include<string>
#include <typeinfo>
using namespace std;

//类模板成员函数类外实现
// 总结：类模板中成员函数类外实现时，需要加上模板参数列表
template<class T1,class T2>
class Person{
public:
	Person(T1 name,T2 age){
		this->m_Name = name;
		this->m_Age =age;

	}

	void showPerson(){
		cout<<"姓名：" <<this->m_Name << "年龄：" <<this->m_Age <<endl;
	}
	T1 m_Name;
	T2 m_Age;


};

//构造函数类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){
	this->m_Name = name;
		this->m_Age =age;

}

//成员函数的类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson(){   //必须加模板参数列表  作用域
		cout<<"姓名：" <<this->m_Name << "年龄：" <<this->m_Age <<endl;
}

void test01(){
	Person<string,int>p("tom",18);
}
int main(){
	test01();
}