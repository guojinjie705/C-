#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
//adjacent_find
void test01(){
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "没有找到相邻重复元素" << endl;
	}else{
		cout << "找到相邻重复元素：" << *pos << endl; 
	} 
}

int main(){
	test01();
}
/*
adjacent_find
功能描述：

查找相邻重复元素
函数原型：

adjacent_find(iterator beg, iterator end);

// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器

// beg 开始迭代器

// end 结束迭代器

*/