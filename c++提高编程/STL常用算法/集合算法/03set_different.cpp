#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include <functional>
#include<algorithm>
#include<set>
//set_different
class myPrint{
public:
	void operator()(int val){
		cout << val << " ";
	}
};
void test01(){

	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}

	//创建一个差集的目标容器
	std::vector<int> vTarget;
	//给目标容器开辟空间
	//最特殊的情况 两个容器没有交集，取两个容器中大的size作为目标容器开辟空间
	vTarget.resize(max(v1.size(),v2.size()));
	cout << "v1和v2的差集为："<< endl;
std::vector<int>::iterator itEnd = 
	set_different(v1.begin(), v1.end(),v2.begin(), v2.end(),vTarget.begin());

	for_each(vTarget.begin(), itEnd,myPrint());
	cout << endl;
}

int main(){
	test01();
}