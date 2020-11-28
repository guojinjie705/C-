#include<iostream>
#include<string>
using namespace std;
// 类对象作为类成员
// C++类中的成员可以是另一个类的对象，我们称该成员为 对象成员


//手机类
class Phone{
public:
	Phone(string pName){
		m_PName = pName;
		cout <<"phone的构造函数调用" <<endl;
	}

	~Phone(){
		cout << "Phone析构函数调用" <<endl;
	}
	string m_PName;
};

//人类
class Person{
public:
	//Phone m_Phone = pName;  隐式转换法
	Person(string name,string pName):m_Name(name),m_Phone(pName)
	{
		cout <<"person的构造函数调用" <<endl;
	}
	~Person(){
		cout << "Person析构函数调用" <<endl;
	}
	string m_Name;

	Phone m_Phone;   //对象成员
};

//当其他类对象作为本类成员时，构造函数先构造类对象，再构造自身,析构的顺序与构造相反
void test01(){
	Person p("张三","苹果MAX");
	cout << p.m_Name <<"拿着"  << p.m_Phone.m_PName << endl;
}
int main(){
	test01();
}