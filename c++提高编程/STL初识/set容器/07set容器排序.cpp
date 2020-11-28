#include<iostream>
using namespace std;
#include<set>

//set容器排序
class MyCompare{  //仿函数
public:
	bool operator()(int v1,int v2){
		return v1 > v2;
	}
};
void test01(){
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);

	for (std::set<int>::iterator i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;


	//指定排序规则为从大到小
	set<int,MyCompare> s2;
	s2.insert(20);
	s2.insert(10);
	s2.insert(50);
	s2.insert(30);
	s2.insert(40);

	for (std::set<int,MyCompare>::iterator i = s2.begin(); i != s2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main(){
	test01();
}