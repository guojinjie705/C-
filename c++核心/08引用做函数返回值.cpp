#include<iostream>
using namespace std;
//引用做函数返回值
	//1.不要返回局部变量的引用
int& test01(){
	int a = 10;
	return a;
	
}

//2.函数的调用可以作为左值

int& test02(){
	static int a = 10;  //静态变量存放在全局区，全局区上的数据在程序结束后系统才释放
	return a;


}
int main(){

	int &ref = test01();
	cout << "ref = "  << ref << endl;  //第一次结果正确，因为编译器做了保留
	cout << "ref = "  << ref << endl; //第二次错误，a的内存已被释放

	int &ref2 = test02();
	cout << "ref2 = "  << ref2 << endl;
	cout << "ref2 = "  << ref2 << endl;
	cout << "ref2 = "  << ref2 << endl;

	//如果函数的返回值是引用，那么这个函数调用可以作为左值
	test02() = 1000;  //返回a ,相当于a = 1000
	cout << "ref2 = "  << ref2 << endl;  //ref2是a的别名
	cout << "ref2 = "  << ref2 << endl;

}