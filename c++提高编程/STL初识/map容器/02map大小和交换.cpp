#include<iostream>
using namespace std;
#include<map>
//map 大小和交换
/*
size(); //返回容器中元素的数目
empty(); //判断容器是否为空
swap(st); //交换两个集合容器
*/
//大小
void test01(){

	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40));

	if (m.empty())
	{
		cout << "m为空" << endl;
	}else{
		cout << "m不为空" << endl;
		cout << "m的大小为：" << m.size() << endl;
	}
}

//交换

void printMap(map<int,int> &m){
	for (std::map<int,int>::iterator i = m.begin(); i != m.end(); i++)
	{
		cout <<"key:" <<i->first << " value:"  << i->second << endl;
	}
	cout << endl;
}
void test02(){
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40));

	map<int,int>m2;
	m2.insert(pair<int,int>(4,100));
	m2.insert(pair<int,int>(5,200));
	m2.insert(pair<int,int>(6,300));
	m2.insert(pair<int,int>(7,400));

	cout << "交换前：" << endl;
	printMap(m);
	printMap(m2);

	cout << "交换后：" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);



}
int main(){
	test01();
	test02();
}