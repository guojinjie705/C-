#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//仿函数 返回值类型是bool数据类型，称为谓词
/*
谓词概念
概念：
返回bool类型的仿函数称为谓词
如果operator()接受一个参数，那么叫做一元谓词
如果operator()接受两个参数，那么叫做二元谓词
*/
//一元谓词
class GreaterFive{
public:
	bool operator()(int val){   //返回值类型bool
		return val>5;
	}
};
void test01(){
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中有没有大于5 的数字
	//GreaterFive()  匿名函数对象
	//find_if 返回的是迭代器   要添加头文件algorithm
	vector<int>::iterator it = find_if(v.begin(), v.end(),GreaterFive());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}else{
		cout<< "找到了大于5的数字：" << *it << endl;
	}
}

int main(){
	test01();
}