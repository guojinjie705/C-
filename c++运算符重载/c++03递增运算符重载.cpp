#include<iostream>
using namespace std;
//递增运算符重载

//自定义整形
class MyInteger{
	friend ostream& operator<<(ostream& out, MyInteger myint);
public:
	MyInteger(){
		m_Num = 0;
	}
	//重载前置++运算符
MyInteger & operator++(){

	m_Num++;
	return *this;
}


	//重载后置++运算符
//后置++
	MyInteger operator++(int) {
		//先返回
		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

//重载左移运算符 
ostream & operator<<(ostream & cout,MyInteger myint){
	cout << myint.m_Num;
	return cout;
}

 //前置++ 先++ 再返回
void test01(){
	MyInteger myint;
	cout <<++myint << endl;
	cout << myint << endl;
}
//后置++ 先返回 再++
void test02() {

	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}
int main(){
	test01();
	test02();
}