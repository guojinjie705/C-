#include<iostream>
using namespace std;
/*
const修饰指针有三种情况

1.const修饰指针 --- 常量指针
2.const修饰常量 --- 指针常量
3.const即修饰指针，又修饰常量
技巧：看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量
*/
int main(){

int a = 10;
	int b = 10;
	//1.常量指针
	//const修饰的是指针，指针指向可以改，指针指向的值不可以更改
	const int * p1 = &a; 
	p1 = &b; //正确
	//*p1 = 100;  报错
	
	//2.指针常量
	//const修饰的是常量，指针指向不可以改，指针指向的值可以更改
	int * const p2 = &a;
	//p2 = &b; //错误
	*p2 = 100; //正确

    //3.const既修饰指针又修饰常量，指针指向和指针指向的值都不可以改
	const int * const p3 = &a;
	//p3 = &b; //错误
	//*p3 = 100; //错误

	system("pause");

	return 0;


}