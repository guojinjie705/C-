#include<iostream>
using namespace std;
#include<string>

//string求子串
/*
string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串
*/
void test01(){
	string str = "abcdefghijk";

	string subStr = str.substr(1,3);

	cout << "subStr = " << subStr << endl;
}

//实用操作
void test02(){
//从邮件地址获取用户名
	string email = "zhangsan@sina.com";
	int pos = email.find('@');

	string userName = email.substr(0,pos);

	cout << "userName = " << userName << endl;



}
int main(){
	test01();
	test02();
}