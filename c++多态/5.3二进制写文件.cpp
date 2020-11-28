#include<iostream>
#include<fstream>
#include<string>
//二进制文件  写文件
/*
以二进制的方式对文件进行读写操作

打开方式要指定为 ==ios::binary==
二进制方式写文件主要利用流对象调用成员函数write

函数原型 ：ostream& write(const char * buffer,int len);

参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

*/
class Person{
public:
	char m_Name[64];
	int m_Age;



};

void test01(){
//1.包含头文件
	//2.创建流对象
	ofstream ofs;
	// 3.打开文件
	ofs.open("person.txt",ios::out|ios::binary);

	//4.写文件
	Person p = {"张三"，18};

	ofs.write((const char *)&p,sizeof(Person));

	//5.关闭文件
	ofs.close();

}
int main(){
test01();
}