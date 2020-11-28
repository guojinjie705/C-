#include<iostream>
using namespace std;
#include<string>

//struct和class的区别
/*
在C++中 struct和class唯一的区别就在于 默认的访问权限不同
struct 默认权限为公共
class 默认权限为私有
*/
class C1{
	int m_A;  //默认权限是私有
};

struct C2{
	int m_A;   //默认权限是公共
};


int main(){
	C1 c;
	//c.m_A = 100; //报错

	C2 s;
	s.m_A = 120;
}
