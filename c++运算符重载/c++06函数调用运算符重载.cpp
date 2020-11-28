#include<iostream>
#include<string>
using namespace std;
//仿函数
//函数调用运算符重载
//打印输出类
class MyPrint{
public:
	//重载函数调用运算符
	void operator()(string text){
		cout << text << endl;

	}
};
void MyPrint02(string test){
	cout << test << endl;
}

//仿函数非常灵活，没有固定的写法
//加法类
class MyAdd{
public:
	int operator()(int num1,int num2){
		return num1+num2;

	}
};


void test01(){
	MyPrint myPrint;
	myPrint("hello world,learning C++");//由于使用起来非常类似于函数调用，因此称为仿函数

	MyPrint02("hello world---");


}
void test02(){
	MyAdd myAdd;
	int ret = myAdd(100,200);
	cout << "ret = " << ret << endl;

	//匿名函数对象 ===类名()
	cout << MyAdd()(1000,2000) << endl;
}


int main(){

	test01();
	test02();
}