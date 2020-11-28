#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

//count_if
//统计内置数据类型
class Greater20{
	public:
	bool operator()(int val){
		if (val > 20)
		{
			return val;
		}

	}
};
void test01(){
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(25);

	int num = count_if(v.begin(), v.end(),Greater20());
	cout << "大于20的元素个数=" << num << endl;

}
//统计自定义数据类型
class Person{
	public:
		Person(string name,int age){
			this->m_Age = age;
			this->m_Name = name;
		}
		string m_Name;
		int m_Age;

};

class AgeGreater20{
public:
	bool operator()(const Person &p){
		return p.m_Age > 20;
	}
};
void test02(){
	vector<Person> v;
	Person p1("刘备",35);
	Person p2("关羽",35);
	Person p3("张飞",35);
	Person p4("赵云",30);
	Person p5("曹操",40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//统计大于20岁 的人员个数
	int num = count_if(v.begin(), v.end(),AgeGreater20());

	cout << "大于20岁的人员个数为" << num << endl;



}
int main(){
	test01();
	test02();
}

/*
按条件统计元素个数
函数原型：

count_if(iterator beg, iterator end, _Pred);

// 按条件统计元素出现次数

// beg 开始迭代器

// end 结束迭代器

// _Pred 谓词

​
*/