#include<iostream>
#include<string>
using namespace std;

//类模板对象做函数参数

template<class T1,class T2>
class Person{
public:
	Person(T1 name,T2 age){
		this->m_Name = name;
		this->m_Age = age;

	}

	void showPerson(){
		cout<<"name:" << this->m_Name <<" age:" <<this->m_Age <<endl;
	}
	T1 m_Name;
	T2 m_Age;
};

//1.指定传入对象 --- 直接显示对象的数据类型
void printPerson1(Person<string,int> &p){
	p.showPerson();

}
void test01(){
	Person<string,int>p("孙悟空",1000);
	printPerson1(p);

}

//2.参数模板化   --- 将对象中的参数变为模板进行传递
template<class T1,class T2>
void ptrintPerson2(Person<T1,T2> &p){
	p.showPerson();

	cout<<"T1的类型为：" <<typeid(T1).name() << endl;
	cout <<"T2的类型为：" << typeid(T2).name() << endl;

}


void test02(){
	Person<string,int>p("猪八戒",998);
	printPerson2(p);

}


//3.整个类模板化 --- 将这个对象类型 模板化进行传递


template<class T>
void printPerson3(T &p){
	p.showPerson();
	cout <<"T 的类型为：" <<typeid(T) <<endl;

}

void test03(){

	Person<string,int>p("唐僧",30);
	printPerson3(p);
}
int main(){

	test01();
	test02();
	test03();
}