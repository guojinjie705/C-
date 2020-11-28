#include<iostream>
using namespace std;
#include<string>

//string字符串拼接
/*
string& operator+=(const char* str); //重载+=操作符
string& operator+=(const char c); //重载+=操作符
string& operator+=(const string& str); //重载+=操作符
string& append(const char *s); //把字符串s连接到当前字符串结尾
string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s); //同operator+=(const string& str)
string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾

*/
void test01(){
	string str1 = "I";
	str1 += " LOVE U";
	cout << "str1 = " << str1 << endl;

	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2= "hate you";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "we";
	str3.append("use python!");
	cout << "str3 = " << str3 << endl;

	str3.append("use python!",5);//把字符串s的前n个字符连接到当前字符串结尾
	cout << "str3 = " << str3 << endl;

	string str4 = "JAVAstript";
	str3.append(str4);
	cout << "str3 = " << str3 << endl;

	//从str4截取，参数2是起始位置，参数3是截取个数
	str3.append(str4,5,4);//字符串s中从pos开始的n个字符连接到字符串结尾
	cout << "str3 = " << str3 << endl;

}

int main(){
	test01();
}