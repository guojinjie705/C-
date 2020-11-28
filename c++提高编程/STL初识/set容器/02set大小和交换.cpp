#include<iostream>
using namespace std;
#include<set>

//set容器 大小和交换
void printSet(set<int> &s){
	for (std::set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i <<" ";
	}
	cout << endl;
}
//大小
void test01(){
	set<int> s1;
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//打印
	printSet(s1);

	//判断是否为空
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}else{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size() << endl;
	}
}

//交换
void test02(){
	set<int> s1;
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);

	cout << "交换后:" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);



}
int main(){
	test01();
	test02();
}
/*
总结：

统计大小 --- size
判断是否为空 --- empty
交换容器 --- swap

*/