#include<iostream>
using namespace std;
#include<list>
#include<string>
#include<algorithm>

class Person{
public:
	Person(string name,int age,int height){
		this->m_Age = age;
		this->m_Name = name;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

//指定排序规则
bool comparePerson(Person &p1,Person &p2){
	//按照年龄升序
	if (p1.m_Age == p2.m_Age)
	{
		//年龄相同 按照身高排序
		return p1.m_Height > p2.m_Height;
	}else{
		return p1.m_Age < p2.m_Age;
	}
}


void test01(){
	list<Person> L;
	//准备数据
	Person p1("刘备", 35 , 175);
	Person p2("曹操", 45 , 180);
	Person p3("孙权", 40 , 170);
	Person p4("赵云", 25 , 190);
	Person p5("张飞", 35 , 160);
	Person p6("关羽", 35 , 200);
	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	//打印
	for (std::list<Person>::iterator i =L.begin(); i != L.end(); i++)
	{
		cout << "姓名：" <<(*i).m_Name <<" 年龄：" <<(*i).m_Age <<" 身高：" << (*i).m_Height <<endl;

	}

//排序
	cout <<"----------------------------" << endl;
	cout << "排序后：" << endl;

	L.sort(comparePerson);  //sort （成员函数）
	for (std::list<Person>::iterator i =L.begin(); i != L.end(); i++)
	{
		cout << "姓名：" <<(*i).m_Name <<" 年龄：" <<(*i).m_Age <<" 身高：" << (*i).m_Height <<endl;

	}
}


int main(){
	test01();
}