//虚析构和纯虚析构
#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
		Animal(){
cout <<"这是animal构造函数调用" << endl;
		}
		// virtual ~Animal(){   //利用虚析构可以解决父类指针释放子类对象不干净的根
		// 	cout <<"这是animal析构函数调用" << endl;
		// }
//纯虚析构  需要声明也要实现
		//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
		virtual ~Animal() = 0;
	public:
		virtual void speak() = 0;
};

Animal::~Animal() {
	cout <<"这是animal纯虚析构函数调用" << endl;
}
class Cat:public Animal{
public:
	Cat(string name){
		cout <<"这是cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	void speak(){
		cout << * m_Name << "小猫在说话" << endl;
	}

	~Cat(){
		if (m_Name != NULL)
		{
			cout <<"cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string *m_Name;
};

void test01(){
	// Animal * animal = new Cat;
	Animal * animal = new Cat("Tom");
	animal-> speak();
	//父类指针在析构时候，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
	delete animal;
}

int main(){
	test01();
}

/*
多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码

解决方式：将父类中的析构函数改为虚析构或者纯虚析构

虚析构和纯虚析构共性：

可以解决父类指针释放子类对象
都需要有具体的函数实现
虚析构和纯虚析构区别：

如果是纯虚析构，该类属于抽象类，无法实例化对象
虚析构语法：

virtual ~类名(){}

纯虚析构语法：

virtual ~类名() = 0;

类名::~类名(){}

*/

/*
总结：

​ 1. 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象

​ 2. 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构

​ 3. 拥有纯虚析构函数的类也属于抽象类 
*/