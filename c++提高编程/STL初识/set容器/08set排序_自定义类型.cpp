#include<iostream>
using namespace std;
#include<set>
#include<string>
//总结：对于自定义数据类型，set必须指定排序规则才可以插入数据
class Person{
public:
	Person(string name,int age){
		this->m_Name = name;
		this->m_Age =  age;

	}
	string m_Name;
	int m_Age;

};

class comparePerson{ //仿函数  重新定义排序规则
public:
	bool operator()(const Person&p1,const Person&p2){
		return p1.m_Age > p2.m_Age;
	}
};
void test01(){
	//自定义数据类型 都会指定排序规则
	set<Person,comparePerson> s;

	//创建Person 对象
	Person p1("刘备",24);
	Person p2("关羽",29);
	Person p3("张飞",25);
	Person p4("赵云",21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (std::set<Person>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << "姓名：" << i->m_Name << " 年龄：" << i->m_Age << endl;
	}
}


int main(){
	test01();
}