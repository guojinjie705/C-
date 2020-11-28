#include<iostream>
using namespace std;
#include<vector>
//互换容器
//总结：swap可以使两个容器互换，可以达到实用的收缩内存效果
void printVector(vector<int> &v){
	for (std::vector<int>::iterator i =v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}
//1.基本使用
void test01(){

	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout<<"交换前：" <<endl;
	printVector(v1);

	std::vector<int> v2;
	for (int i = 10; i > 0 ;i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "交换后：" <<endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}


//2.实际应用
//巧用swap可以收缩内存空间
void test02(){
	std::vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout <<"v的容量："  << v.capacity() << endl;
	cout <<"v的大小："  << v.size() << endl;    //10000

	//重新指定大小哦
	v.resize(3);
	cout <<"v的容量："  << v.capacity() << endl;
	cout <<"v的大小："  << v.size() << endl;   //3

	//巧用swap收缩内存
	std::vector<int> (v).swap(v);
	//std::vector<int> (v)  --匿名对象
	cout <<"v的容量："  << v.capacity() << endl;
	cout <<"v的大小："  << v.size() << endl;  //3

}

int main(){
test01();
test02();
}