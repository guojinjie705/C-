#include<iostream>
using namespace std;
//1.new的基本语法
int * func(){
	//在堆区创建整形数据
	//new 返回的是 该数据类型的指针
	int * p = new int(10);
	return p;
}
void test01(){
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	
	//堆区的数据由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	//cout << *p << endl; //内存已被释放，再次访问会报错哦
}


//2.在堆区利用new开辟数组
void test02(){
	//创建10整形数据的数组，在堆区
	int * arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给元素赋值
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl; //打印
	}
	//释放堆区数组
	//释放数组的时候，要加[]才可以
	delete[] arr;
}
int main(){
	//test01();
	test02();
}