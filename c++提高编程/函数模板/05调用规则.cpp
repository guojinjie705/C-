#include<iostream>
using namespace std;

/*
普通函数与函数模板的调用规则
调用规则如下：

1.如果函数模板和普通函数都可以实现，优先调用普通函数
2.可以通过空模板参数列表来强制调用函数模板
3.函数模板也可以发生重载
4.如果函数模板可以产生更好的匹配,优先调用函数模板

总结：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性
*/

//普通函数
void myPrint(int a,int b)
{
	cout << "这是一个普通函数" <<endl;
}

template<class T>
void myPrint(T a,T b){
	cout <<"调用函数模板" <<endl;
}


//函数模板重载
template<class T>
void myPrint(T a,T b,T c){
	cout <<"函数模板的重载" <<endl;
}
void test01(){
	int a =10;
	int b =20;
	// myPrint(a,b);   //优先调用普通函数

	//通过空模板参数列表，强制调用函数模板
	myPrint<>(a,b);

	myPrint<>(a,b,10);

	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1,c2);  //直接调用函数模板不用发生隐式类型转换
}
int main(){
	test01();
}