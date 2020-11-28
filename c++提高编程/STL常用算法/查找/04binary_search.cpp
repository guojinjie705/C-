#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
//binary_search 查找指定元素是否存在
void test01(){

	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	// v.push_back(2);  如果是无无序序列，结果未知

	//查找指定元素9是否存在

	bool ret = binary_search(v.begin(), v.end(),9);

	if (ret)
	{
		cout << "找到了元素" << endl;
	}else{
		cout << "找不到元素" << endl;
	}
}

int main(){
	test01();
}
/*
查找指定元素是否存在
函数原型：
bool binary_search(iterator beg, iterator end, value);

// 查找指定的元素，查到 返回true 否则false

// 注意: 在无序序列中不可用

// beg 开始迭代器

// end 结束迭代器

// value 查找的元素

*/