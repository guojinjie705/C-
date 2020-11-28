#include<iostream>
using namespace std;
#include<functional>  //内建函数对象头文件
#include<vector>
#include<algorithm>

//内建函数对象 逻辑仿函数
//逻辑非 logical_not
void test01(){
	std::vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);

	for (std::vector<bool>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//利用逻辑非 将容器v 搬运到 容器v2中，并执行取反操作
	std::vector<bool> v2;
	v2.resize(v.size());  //搬运前要先开辟空间
//搬运transform
	transform(v.begin(), v.end(),v2.begin(),logical_not<bool>());  

	for (std::vector<bool>::iterator i = v2.begin(); i != v2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main(){
	test01();
}

/*
逻辑仿函数
功能描述：实现逻辑运算

函数原型：
template<class T> bool logical_and<T> //逻辑与
template<class T> bool logical_or<T> //逻辑或
template<class T> bool logical_not<T> //逻辑非

总结：逻辑仿函数实际应用较少，了解即可
*/