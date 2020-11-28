#include<iostream>
using namespace std;
#include<map>
//map排序
class MyCompare{
public:
	bool operator()(int v1,int v2){
		return v1>v2;  //降序
	}
};
void test01(){
	//默认从小到大排序
	//利用仿函数实现从大到小排序
	map<int,int,MyCompare> m;

	m.insert(make_pair(1,100));
	m.insert(make_pair(2,200));
	m.insert(make_pair(3,300));
	m.insert(make_pair(4,400));

	for (std::map<int,int>::iterator i = m.begin(); i != m.end(); i++)
	{
		cout <<"key:"<< i->first <<" value:"<< i->second << endl;
	}
	cout << endl;




}

int main(){
	test01();   
}
/*
总结：
利用仿函数可以指定map容器的排序规则
对于自定义数据类型，map必须要指定排序规则,同set容器
*/