#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
//查找 find_if


//1.查找内置数据类型
class GreaterFive{
public:
	bool operator()(int val){
		return val >5;
	}
};
void test01(){
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(),GreaterFive());

	if (it==v.end())
	{
		cout <<"没有找到" << endl;
	}else{
		cout << "找到大于5 的数据：" << *it << endl;
	}
}
//2.查找自定义数据类型

class Person{
public:
	Person(string name,int age){
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};
class Greater20{
public:
	bool operator()(int val){
		return val>20;
	}
};
void test02(){
	std::vector<int> v;

	Person p1("aaa",10);
	Person p2("bbbb",20);
	Person p3("ccc",30);
	Person p4("dddd",40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找年龄大于20 的人
	std::vector<int>::iterator it = find_if(v.begin(), v.end(),Greater20());

	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}else{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main(){
	test02();
	test01();
}