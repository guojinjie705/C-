#include<iostream>
using namespace std;
//函数默认参数
//如果我们自己传入数据，就用自己的数据，如果没有那么用默认值
//语法： 返回值类型 函数名 （参数= 默认值）{}
int func(int a,int b =20,int c=30){
	return a+b+c;
}

// 注意事项
//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int main(){

	cout << func(10,20,30) << endl;//70
	cout << func(10) << endl;  //60
	cout << func(10,30) <<endl;  //70


}