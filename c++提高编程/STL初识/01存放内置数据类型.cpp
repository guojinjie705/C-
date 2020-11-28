#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//vector容器存放内置数据类型
void myPrint(int val){
	cout << val << endl;

}
void test01(){
	//创建一个vector容器，数组
	std::vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//通过迭代器访问
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
	std::vector<int>::iterator itBegin = v.begin();  //起始迭代器，指向容器中第一个元素

	vector<int>::iterator itEnd = v.end(); //结束迭代器，指向容器中最后一个元素的下一个元素

	//第一种遍历方法
	while(itBegin != itEnd){
		cout << *itBegin << endl;
		itBegin++;

	}

	//第二种遍历方式
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i <<endl;
	}


	//第三种遍历方法
	//使用STL提供标准遍历算法  头文件 algorithm
	for_each(v.begin(),v.end(),myPrint);  //回调

	
}

int main(){
	test01();
}