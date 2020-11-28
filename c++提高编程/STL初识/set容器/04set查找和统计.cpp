#include<iostream>
using namespace std;
#include<set>
//set容器 查找和统计
/*
find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
count(key); //统计key的元素个数
*/
void test01(){
	set<int> s1;
//插入数据
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "找到元素" << endl;
	}else{
		cout << "找不到元素" << endl;
	}
}

//统计
void test02(){
	set<int> s1;
//插入数据
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//统计30的个数
	int num  = s1.count(30);
	//对于set而言 统计结果要么是0 要么是1
	cout << "num = " << num << endl;
}
int main(){
	test01();
	test02();
}