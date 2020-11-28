#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

//count
// 总结： 统计自定义数据类型时候，需要配合重载 operator==
//1.统计内置数据类型
void test01(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	int num = count(v.begin(), v.end(),10);
	cout << "元素10的个数：" << num << endl;
} 
//2.统计自定义数据类型
class Person{
public:
	Person(string name,int age){
		this->m_Age = age;
		this->m_Name = name;
	}
	bool operator==(const Person &p){  //重载双等号
		if (this->m_Age == p.m_Age)
		{
			return true;
		}else{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};

void test02(){
	std::vector<Person> v;

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

	Person p("诸葛亮",35);

	int num = count(v.begin(), v.end(),p);
	cout << "年龄跟诸葛亮年龄一样的有" << num << endl;
}
int main()
{
	test01();
	test02();
}

/*
统计元素个数
函数原型：

count(iterator beg, iterator end, value);

// 统计元素出现次数

// beg 开始迭代器

// end 结束迭代器

// value 统计的元素
*/