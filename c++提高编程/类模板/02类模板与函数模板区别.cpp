#include<iostream>
#include<string>
using namespace std;

//类模板与函数模板的区别

template<class NameType,class AgeName = int >
class Person{
public:
	Person(NameType name,AgeName age){   //构造函数赋初值
		this->m_Name = name;
		this->m_Age = age;

	}
	void showPerson(){
		cout <<"name:" <<this->m_Name << " age:" <<this->m_Age <<endl;
	}
	NameType m_Name;
	AgeName m_Age;
};
//1.类模板没有自动类型推导使用方式
void test01(){
	// Person p("孙悟空",1000);   //错误，无法用自动类型推导

	Person<string,int>p("孙悟空",1000);  //正确，只能使用显示指定类型


}
//2.类模板在模板参数列表中可以有默认参数
void test02(){
	Person<string>p("猪八戒",999);    // class AgeName = int 
	p.showPerson();

}

int main(){
	test01();
	test02();
}