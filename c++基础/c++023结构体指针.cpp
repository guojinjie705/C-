#include<iostream>
using namespace std;
#include<string>
//结构体指针
//总结：结构体指针可以通过 -> 操作符 来访问结构体中的成员
 //定义结构体
struct Student{
	string name;
	int age;
	int score;
};
int main(){
//1.创建学生结构体变量
	struct Student s = {"张杰",20,99};
//2.通过指针指向结构体变量
	struct Student * p = &s;
//3.通过指针访问结构体变量中的数据
	//访问元素需要利用 "——>"符号
	cout <<"姓名：" << p->name
			<<" 年龄：" << p->age
			<<" 分数：" << p->score << endl;
}