#include<iostream>
using namespace std;

//函数重载的注意事项
//1.引用做为重载的条件
void func(int &a){         //int &a = 10；不合法
	cout<< "func(int &a)的调用" << endl;
}
void func(const int &a){   //const int &a = 10; 合法
	cout<< "func(const int &a)的调用" << endl;
}


//2.函数重载遇到默认参数
void func2(int a,int b=20){
	cout << "这是func2(int a,int b)的调用！我的天啊"  <<endl;

}
void func2(int a){
	cout << "这是func2(int a)的调用！我的天啊"  <<endl;

}
int main(){

	int a =10;
	func(a);  //调用func(int &a)

	func(10);  //会调用func(const int &a)

	//func2(10); //当函数重载碰到默认参数，出现二义性，报错，尽量避免
				// error: call of overloaded ‘func2(int)’ is ambiguous
	func2(10,20);
}