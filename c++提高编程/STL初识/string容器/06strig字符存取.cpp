#include<iostream>
using namespace std;
#include<string>
/*
string中单个字符存取方式有两种

char& operator[](int n); //通过[]方式取字符
char& at(int n); //通过at方法获取字符

*/
void test01(){
	string str1 = "hello";
	// cout << "str1 = " << str1 << endl;

	//1.通过 [] 访问单个字符

	for (int i = 0; i < str1.size();i++)
	{
		cout << str1[i] <<"->" << endl;
	}
	cout << endl;
	//2.通过at方法访问单个字符
	for (int i = 0; i < str1.size();i++)
	{
		cout << str1.at(i) <<"~~>" << endl;
	}
	cout << endl;

	//修改单个字符
	str1[0] = 'x';
	cout << "str1 = " << str1 << endl;

	str1.at(1) = "y";
	cout << "str1 = " << str1 << endl;


}
	
	


int main(){

	test01();
}