#include<iostream>
#include<string>
#include <typeinfo>
using namespace std;
#include "person.cpp" 
#include "person.hpp"   //将.h和.cpp的内容写到一起，主流方法 
//类模板分文件编写问题以及解决
// template<class T1,class T2>
// class Person{
// public:
// 	Person(T1 name,T2 age);

// 	void showPerson();
// 	T1 m_Name;
// 	T2 m_Age;
// };

// template<class T1,class T2>
// Person<T1,T2>::Person(T1 name,T2 age){
// 	this->m_Name = name;
// 	this->m_Age =age;


// }

// template<class T1,class T2>
// void Person<T1,T2>::showPerson(){
// 	cout<<"name:" <<this->m_Name << "age:" <<this->m_Age <<endl;

// }


void test01(){
	Person<string,int>p("Jerry",19);
	p.showPerson();
}
int main(){
	test01();
}


//写头文件 Person.h
#pragram once
#include<iostream>
using namespace std;

template<class T1,class T2>
class Person{
public:
	Person(T1 name,T2 age);

	void showPerson();
	T1 m_Name;
	T2 m_Age;
};

/写源文件 person.cpp

#include<iostream>
using namespace std;
#include "person.h"   //
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){
	this->m_Name = name;
	this->m_Age =age;


}

template<class T1,class T2>
void Person<T1,T2>::showPerson(){
	cout<<"name:" <<this->m_Name << "age:" <<this->m_Age <<endl;

}
