#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//常用遍历算法 for_each

//普通函数
void print01(int val){
	cout << val << endl;
}
//仿函数
class Print02{
public:
	void operator()(int val){
		cout << val <<" ";
	}
};
void test01(){
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(),print01);
	cout << endl;

	for_each(v.begin(), v.end(),Print02());
	cout << endl;
}

int main(){
	test01();

}
/*
for_each实现遍历容器
函数原型：

for_each(iterator beg, iterator end, _func);

// 遍历算法 遍历容器元素

// beg 开始迭代器

// end 结束迭代器

// _func 函数或者函数对象
*总结：**for_each在实际开发中是最常用遍历算法，需要熟练掌握
*/