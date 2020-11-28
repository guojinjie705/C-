#include<iostream>
#include<string>
using namespace std;

/*
掌握类模板配合友元函数的类内和类外实现
1.全局函数类内实现 - 直接在类内声明友元即可
2.全局函数类外实现 - 需要提前让编译器知道全局函数的存在
*/

//提前让编译器知道Person的存在
template<class T1,class T2>
class Person;
//类外实现
template<class T1,class T2>
void printPerson2(Person<T1,T2> &p){
	cout<<"类外实现---name:" <<p.m_Name << "age:" <<p.m_Age <<endl;
}


template<class T1,class T2>
class Person{
	//全局函数 类内实现
	friend void printPerson(Person<T1,T2> &p){
		cout<<"name:" <<p.m_Name << "age:" <<p.m_Age <<endl;

	}

	//全局函数  类外实现
	//加空模板参数列表
	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1,T2> &p);
public:
	Person(T1 name,T2 age){
		this->m_Name =name;
		this->m_Age =  age;

	}
private:
	T1 m_Name;
	T2 m_Age;
};


//1.全局函数在类内实现
void test01(){
Person<string,int> p("tom",18);
printPerson(p);
}

//2.全局函数在类外实现
void test02(){
	Person<string,int>p("jerry",20);
	printPerson2(p);
}
int main(){
test01();
test02();

}