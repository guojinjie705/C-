#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>

//算术生成算法 accumulate
void test01(){
	std::vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	//参数3 起始累加值
	int total  = accumulate(v.begin(), v.end(),0);  //计算1+2+3+····+100
	cout << "total = " << total << endl;  //5050
}

int main(){
	test01();
}

/*

算术生成算法属于小型算法，使用时包含的头文件为 #include <numeric>


accumulate // 计算容器元素累计总和

fill // 向容器中添加元素

​

5.5.1 accumulate
功能描述：

计算区间内 容器元素累计总和
函数原型：

accumulate(iterator beg, iterator end, value);

// 计算容器元素累计总和

// beg 开始迭代器

// end 结束迭代器

// value 起始值
*/