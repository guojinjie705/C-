#include<iostream>
using namespace std;
#include<set>

//set容器 插入和删除
void printSet(set<int> &s){
	for (std::set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
void test01(){
	set<int> s1;
//插入数据
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//遍历
	printSet(s1);

	//删除
	s1.erase(s1.begin());
	printSet(s1);

	//删除重载版本
	s1.erase(30);
	printSet(s1);

	//清空
	// s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

int main(){
	test01();
}