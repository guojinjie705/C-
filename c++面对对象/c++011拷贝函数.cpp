#include<iostream>
using namespace std;
/*
拷贝构造函数调用时机通常有三种情况

1.使用一个已经创建完毕的对象来初始化一个新对象
2.值传递的方式给函数参数传值
3.以值方式返回局部对象
*/

class Person{
public:
	Person(){
		cout<<"Person的无参构造函数" << endl;
	}
	Person(int age){
		m_Age = age;
		cout<<"Person的有参构造函数" << endl;
	}
	//拷贝构造函数  --克隆参数对象所具有的属性
	Person(const Person &p){
		//将传入的人身上的所有属性，拷贝到我身上
		cout<<"Person的拷贝构造函数" << endl;
		m_Age = p.m_Age;
	}
	~Person(){
		cout <<"person析构函数的调用" <<endl;
	}
	int m_Age;
};

void test01(){
	// 1.使用一个已经创建完毕的对象来初始化一个新对象
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄= " << p2.m_Age << endl;
}

//2.值传递的方式给函数参数传值
//相当于Person p1 = p;
void doWork(Person p) {}
void test02(){
	Person p;
	doWork(p);
}

//3.以值方式返回局部对象
void doWork2(){
	Person p1;
	cout << (int*) &p1 <<endl;
	return p1;
}
void test03(){
	Person p = doWork2();
	cout << (int*) &p <<endl;

}
int mian(){
	test03();

}