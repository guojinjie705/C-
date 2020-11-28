#include<iostream>
using namespace std;
#include<map>

//map构造和赋值
/*
构造：

map<T1, T2> mp; //map默认构造函数:
map(const map &mp); //拷贝构造函数
赋值：
map& operator=(const map &mp); //重载等号操作符
*/
void printMap(map<int,int> &m){
	for (std::map<int,int>::iterator i = m.begin(); i != m.end(); i++)
	{
		cout << "key:" << (*i).first << " value:" << i->second << endl;
 	}
 	cout << endl;
}
void test01(){
	//创建map容器
	map<int,int> m;

	//核心：插入数据  必须使用对组pair<>()
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40));

	printMap(m);

	//拷贝构造
	map<int,int> m2(m);
	printMap(m2);

	//赋值
	map<int,int> m3;
	m3 = m2;
	printMap(m3);
}


int main(){
	test01();
}