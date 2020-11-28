#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//二元谓词
class MyCompare{
public:
	bool operator()(int v1,int v2){
		return v1>v2;
	}
};
void test01(){
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());  //默认升序
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//使用函数对象 改变算法策略，变为降序
	sort(v.begin(), v.end(),MyCompare());  //提供一个仿函数
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}
int main(){
	test01();
} 