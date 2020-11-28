#include<iostream>
using namespace std;
//菱形继承，钻石继承

//动物类
class Animal{
	public:
	int m_Age;
};
//利用虚继承解决菱形继承的问题,此时继承的是指针
//继承之前 加上关键字 virtual 变为虚基类
//Animal类 称为虚基类
//羊类
class Sheep:virtual public Animal{};

//驼类
class Tuo:virtual public Animal{};

//羊驼类
class SheepTuo:public Sheep,public Tuo{};

void test01(){

	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;

	//当菱形继承时，两个父类拥有相同数据，需要加作用域区分
	cout <<"st.Sheep::m_Age =" << st.Sheep::m_Age  << endl;
	cout <<"st.Tuo::m_Age =" << st.Tuo::m_Age  << endl;

	cout << "st.m_Age = "  << st.m_Age << endl;
}

int main(){
	test01();
}

/*
菱形继承概念：

​ 两个派生类继承同一个基类

​ 又有某个类同时继承者两个派生类

​ 这种继承被称为菱形继承，或者钻石继承

总结：

菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
利用虚继承可以解决菱形继承问题
在继承的父类的继承方式前加上virtual
*/