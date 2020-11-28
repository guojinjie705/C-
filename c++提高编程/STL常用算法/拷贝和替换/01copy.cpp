#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
//copy
class myPrint{
public:
	void operator()(int val){
		cout << val << " ";
	}
};
void test01(){
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	std::vector<int> v2;
	v2.resize(v.size());
	copy(v.begin(), v.end(),v2.begin());

	for_each(v2.begin(), v2.end(),myPrint());
}

int main(){
	test01();
}

/*
5.4.1 copy
功能描述：容器内指定范围的元素拷贝到另一容器中

函数原型：
copy(iterator beg, iterator end, iterator dest);

// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置

// beg 开始迭代器

// end 结束迭代器

// dest 目标起始迭代器

*/