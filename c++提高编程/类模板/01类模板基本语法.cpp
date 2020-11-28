#include<iostream>
#include<string>
using namespace std;

//类模板
template<class NameType,class AgeType>
class Person{
public:
	Person(NameType name,AgeType age){
		this->m_Name = name;
		this->m_Age = age;

	}
	void showPerson(){
		cout <<"name:" <<this->m_Name <<"  age:"<<m_Age <<endl;
	}
	NameType m_Name;
	AgeType m_Age;

};

void test01(){
	Person<string,int>("孙悟空",999);   //模板参数列表
	p1.showPerson();
}
int main(){
	test01();
}