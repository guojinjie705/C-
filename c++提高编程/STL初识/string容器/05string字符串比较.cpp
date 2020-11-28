#include<iostream>
using namespace std;
#include<string>

//字符串比较
void test01(){
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout <<"str1 等于 str2" << endl;
	}
	else if(str1.compare(str2) > 0){
		cout <<"str1 大于 str2" << endl;
	}else{
		cout <<"str1 小于 str2" << endl;
	}
}

int main(){
	test01();
}
/*
字符串比较是按字符的ASCII码进行对比
= 返回 0

> 返回 1

< 返回 -1

函数原型：

int compare(const string &s) const; //与字符串s比较
int compare(const char *s) const; //与字符串s比较

*/