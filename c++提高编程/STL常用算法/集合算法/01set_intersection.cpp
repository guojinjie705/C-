#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>
#include<set>
//set_intersection
class myPrint{
public:
	void operator()(int val){
		cout << val<< " ";
	}
};
void test01(){
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}
	std::vector<int> vTarget;

	//目标容器要提前开辟空间
	//最特殊的情况 大容器包含小容器，开辟空间区最小容器的size即可
	vTarget.resize(min(v1.size(),v2.size()));
	//获取交集
	//返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd =
	set_intersection(v1.begin(), v1.end(),v2.begin(), v2.end(),vTarget.begin());

	for_each(vTarget.begin(), itEnd,myPrint());
	cout << endl;
}

int main(){
	test01();
}
/*
5.6.1 set_intersection
功能描述：

求两个容器的交集
函数原型：

set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);

// 求两个集合的交集

// 注意:两个集合必须是有序序列

// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 // dest 目标容器开始迭代器
总结：

求交集的两个集合必须的有序序列
目标容器开辟空间需要从两个容器中取小值
set_intersection返回值既是交集中最后一个元素的位置

*/