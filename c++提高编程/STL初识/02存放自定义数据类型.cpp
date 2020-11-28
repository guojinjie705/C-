#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Person
{
public:
	Person(string name,int age){
		this->m_Name = name;
		this->m_Age= age;
	}


	string m_Name;
	int m_Age;
};

void test01(){
	std::vector<Person> v;
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//遍历
	for (std::vector<Person>::iterator i = v.begin(); i != v.end(); i++)
	{
		// cout << "姓名：" << (*i).m_Name <<" 年龄：" <<(*i).m_Age <<endl;
		cout << "姓名：" << i->m_Name <<" 年龄：" <<  i->m_Age <<endl;


		
	}

}

//存放自定义数据类型  指针
void test02(){
	std::vector<Person*> v;   //存放数据地址
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	//遍历
	for (std::vector<Person*>::iterator i = v.begin(); i != v.end(); i++)
	{
		// Person * p = (*it);
		cout <<"--name :"<< (*i)->m_Name  << " age:"  << (*i)->m_Age << endl;
	}
}
int main(){
	test01();
	test02();
}