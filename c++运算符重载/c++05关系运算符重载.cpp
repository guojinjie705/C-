#include<iostream>
#include<string>
using namespace std;
//重载关系运算符
class Person{
public:
	Person(string name,int age){
		m_Name = name;
		m_Age =  age;

	}

	//重载 == 号
	bool operator==(Person &p){
		if(this->m_Age == p.m_Age &&  this->m_Name == p.m_Name){
			return true;

		}

		return false;
	}

	bool operator!=(Person &p){
		if(this->m_Age == p.m_Age &&  this->m_Name == p.m_Name){
			return false;

		}

		return true;
	}

	string m_Name;
	int m_Age;
};

void test01(){
	Person 	p1("Tom",18);
	Person p2("Tom",18);
	if (p1 == p2)         //报错，要重载
	{
		cout<<"p1 和 p2相等" << endl;
	}else{
			cout<<"p1 和 p2不相等" << endl;
		}
}

int main(){
	test01();
}